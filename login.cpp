#include "login.h"
#include "ui_login.h"
#include "mysql.h"

#include <QMessageBox>


login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    mysql = new MySql();
}

login::~login()
{
    delete ui;
}

//点击登录
void login::on_pushButtonLogin_clicked()
{
    mysql->openDatabase();
    //获取用户输入的账号密码
    QString userName = ui->lineEditUserName->text();
    QString passWord = ui->lineEditPassWord->text();
    //判断账号密码是否为空
    if(userName.isEmpty())
    {
        QMessageBox::warning(nullptr,"警告","账号为空!");
        return;
    }
    if(passWord.isEmpty())
    {
        QMessageBox::warning(nullptr,"警告","密码为空!");
        return;
    }
    //是否选择身份
    if(ui->comboBoxStatus->currentIndex()==-1)
    {
        QMessageBox::warning(nullptr,"警告","请选择您的身份!");
        return;
    }

    //组建查询语句
    QSqlQuery query;
    QString strTable,stuId,tchId;
    if(ui->comboBoxStatus->currentIndex()==0)
    {
        strTable = "student";
        query.prepare("SELECT stuId FROM " + strTable + " WHERE stuUserName = :dbUserName AND stuPassWord = :dbPassWord;");
    }
    else
    {
        strTable = "teacher";
        query.prepare("SELECT stuId FROM " + strTable + " WHERE stuUserName = :dbUserName AND stuPassWord = :dbPassWord;");

    }
    query.bindValue(":dbUserName", userName);
    query.bindValue(":dbPassWord", passWord);
    qDebug() << userName << passWord <<ui->comboBoxStatus->itemText(0);
    if(query.exec() && query.first())
    {
        QMessageBox::information(nullptr,"提示","登陆成功");
    }
    else
    {
        QMessageBox::warning(nullptr,"警告","登陆失败,请检查账号密码是否正确");
    }
    mysql->closeDatabase();
    return;
}


void login::on_pushButtonQuit_clicked()
{
    this->close();
}

