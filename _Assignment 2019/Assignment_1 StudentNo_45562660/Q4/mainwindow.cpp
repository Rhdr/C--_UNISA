#include "mainwindow.h"
#include "ui_mainwindow.h"

int empType = 0;
int empAppear = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //setup ui, button groups & connections
    ui->setupUi(this);
    rBtnGrp_EmpType = new QButtonGroup(this);
    rBtnGrp_EmpType->addButton(ui->radEmpTypeDates, 0);
    rBtnGrp_EmpType->addButton(ui->radEmpTypeText, 1);

    rBtnGrp_EmpAppear = new QButtonGroup(this);
    rBtnGrp_EmpAppear->addButton(ui->radEmpAppearHighLight, 0);
    rBtnGrp_EmpAppear->addButton(ui->radEmpAppearBold, 1);
    rBtnGrp_EmpAppear->addButton(ui->radEmpAppearUnderline, 2);

    QObject::connect(rBtnGrp_EmpType, SIGNAL(buttonToggled(int, bool)),
                     this, SLOT(rBtnGrp_EmpType_buttonToggled(int, bool)));
    QObject::connect(rBtnGrp_EmpAppear, SIGNAL(buttonToggled(int, bool)),
                     this, SLOT(rBtnGrp_EmpAppear_buttonToggled(int, bool)));
}

MainWindow::~MainWindow()
{
    delete rBtnGrp_EmpType;
    delete rBtnGrp_EmpAppear;
    delete ui;
}

void MainWindow::on_btnBrowse_clicked()
{
    //import user text file
    QString fileName = QFileDialog::getOpenFileName(this, "Browse", "", "Image Files (*.txt)");
    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly)){
        QTextStream cin(&file);
        ui->textEdit->setText(cin.readAll());
    } else {
        QMessageBox::warning(this, "Import Error", "Sorry, the selected file could not be imported");
    }
    applyEmphasis();
}

void MainWindow::applyEmphasis()
{
    //Match & emphasize dates according to user settings
    QRegExp rx;
    if(empType == 0){
        //search dates
        rx.setPattern("(((([1-9]|[12][0-9]|[3][01]) (Jan(uary)?|Mar(ch)?|May|Jul(y)?|Aug(ust)?|Oct(ober)?|Dec(ember)?))|(([1-9]|[12][0-9]|30) (Apr(il)?|Jun(e)?|Sep(tember)?|Nov(ember)?))|(([1-9]|[1][0-9]|[2][0-9]) Feb(ruary)?)) (([1][9][0-9][0-9])|([2][0][0-9][0-9])))|((([1][9][0-9][0-9])|([2][0][0-9][0-9]))([\\/ \\.])(([0][13578]|[1][02])([\\/ \\.])([0][0-9]|[12][0-9]|[3][01])|((([0][469])|([1][1]))([\\/ \\.])([0][0-9]|[12][0-9]|30))|(([0][2])([\\/ \\.])([0][0-9]|[12][0-9]))))|(((([0][0-9]|[12][0-9]|[3][01])([\\/ \\.])([0][13578]|[1][02]))|(([0][0-9]|[12][0-9]|30)([\\/ \\.])(([0][469])|([1][1])))|(([0][0-9]|[12][0-9])([\\/ \\.])([0][2])))([\\/ \\.])(([1][9][0-9][0-9])|([2][0][0-9][0-9])))");
    } else {
        //search text
        rx.setPattern("(" + ui->txtSearch->text() + ")");
    }

    QTextCursor cursor(ui->textEdit->document());
    //clear prev formating
    cursor.select(cursor.Document);
    cursor.setCharFormat(QTextCharFormat());
    cursor.clearSelection();

    QTextCharFormat frmt;
    if(empAppear == 0){
        //highlight
        frmt.setBackground(Qt::yellow);
    } else if(empAppear == 1){
        //bold
        frmt.setFontWeight(QFont::Bold);
    } else {
        //underline
        frmt.setFontUnderline(true);
    }

    int pos = 0;
    int count = 0;
    while (pos >= 0) {
        pos = rx.indexIn(ui->textEdit->toPlainText(), pos);
        if (pos >= 0) {
            cursor.setPosition(pos, QTextCursor::MoveAnchor);
            cursor.setPosition(pos + rx.matchedLength(), QTextCursor::KeepAnchor);
            cursor.setCharFormat(frmt);
            //qDebug() << pos << " " << count << " " << rx.matchedLength();
            ++pos;
            ++count;
        }
    }
}


void MainWindow::rBtnGrp_EmpType_buttonToggled(int id, bool isChecked)
{
    //set global var empType
    if(id == 0 && isChecked){
        //dates
        ui->txtSearch->clear();
        ui->txtSearch->setEnabled(false);
        empType = 0;
    } else {
        //text
        ui->txtSearch->setEnabled(true);
        ui->txtSearch->setFocus();
        empType = 1;
    }
}

void MainWindow::rBtnGrp_EmpAppear_buttonToggled(int id, bool isChecked)
{
    //set global var empAppear
    if(id == 0 && isChecked){
        //highlight
        empAppear = 0;
    } else if(id == 1 && isChecked) {
        //bold
        empAppear = 1;
    } else {
        //underline
        empAppear = 2;
    }
}

void MainWindow::on_btnApply_clicked()
{
    applyEmphasis();
}
