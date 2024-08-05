#include "widget.h"
#include "login.h"
#include "teacherhome.h"
#include "mysql.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget w;
    //login w;
    teacherHome w;
    w.show();
    return a.exec();
}
