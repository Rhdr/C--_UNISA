#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QString>
#include <QStringList>
#include <QMessageBox>
#include <QItemSelectionModel>
#include <QModelIndexList>
#include <QModelIndex>
#include <QDebug>

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
    void on_btnAdd_clicked();
    void on_btnDelete_clicked();
    void currentRowChanged(QModelIndex current,QModelIndex prev);
    void modelDataChanged(QModelIndex topLeft,QModelIndex botomRight,
                          const QVector<int> & role);

private:
    Ui::MainWindow *ui;
    QStringListModel *model;
    QStringList lst;
};

#endif // MAINWINDOW_H
