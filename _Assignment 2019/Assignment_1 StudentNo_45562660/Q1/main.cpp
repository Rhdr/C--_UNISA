#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //show is handeled inside the mainWindow(bool showAppBeforeLoadMsgBox = true) so that the app can be displayed before
    //the loadData-QMessageBox popup - see the MainWindow's signature in the mainwindow.h file
    MainWindow w(true);
    //w.show();
    return a.exec();
}
