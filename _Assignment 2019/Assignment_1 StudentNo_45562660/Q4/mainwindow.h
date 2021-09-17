#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QRegExp>
#include <QTextCursor>
#include <QTextCharFormat>
#include <QButtonGroup>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnBrowse_clicked();
    void applyEmphasis();
    void rBtnGrp_EmpType_buttonToggled(int id, bool isChecked);
    void rBtnGrp_EmpAppear_buttonToggled(int id, bool isChecked);
    void on_btnApply_clicked();

private:
    Ui::MainWindow *ui;
    QButtonGroup *rBtnGrp_EmpType;
    QButtonGroup *rBtnGrp_EmpAppear;
};

#endif // MAINWINDOW_H
