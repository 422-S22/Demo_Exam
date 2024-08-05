#ifndef LOGIN_H
#define LOGIN_H
#include"mysql.h"

#include <QWidget>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButtonLogin_clicked();

    void on_pushButtonQuit_clicked();

private:
    Ui::login *ui;
    MySql *mysql;
};

#endif // LOGIN_H
