#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    factoryIOField = FactoryIOField::getInstance();
    factoryOperations = FactoryOperations::getInstance();

    x = NULL;
    y = NULL;
    result = NULL;
    operation = NULL;
}

MainWindow::~MainWindow()
{
    deleteSetupUiItems();
    deleteOperation();
    delete ui;
    delete factoryIOField;
    delete factoryOperations;
}

void MainWindow::on_radTypeInt_clicked()
{
    type = "int";
    setupUi(type);
}

void MainWindow::on_radTypeStr_clicked()
{
    type = "string";
    setupUi(type);
}

void MainWindow::on_radTypeLst_clicked()
{
    type = "stringList";
    setupUi(type);
}

//creates the ui accoutding to user radio btn selection
void MainWindow::setupUi(QString type)
{
    ui->groupBoxOperation->setEnabled(true);

    //delete old layouts and vars
    deleteSetupUiItems();

    //create IOFields
    x = factoryIOField->createIOField(type);
    y = factoryIOField->createIOField(type);
    result = factoryIOField->createIOField(type);
    widgetX = x->getWidget();
    widgetY = y->getWidget();
    widgetResult = result->getWidget();
    
    //setup layout
    QGridLayout *gridLayout = new QGridLayout();
    gridLayout->addWidget(ui->lblSpacerTop, 1, 1);
    gridLayout->addWidget(ui->lblX, 2, 1);
    ui->lblX->setText("X");
    gridLayout->addWidget(widgetX, 2, 2);
    gridLayout->addWidget(ui->lblY, 3, 1);
    ui->lblY->setText("Y");
    gridLayout->addWidget(widgetY, 3, 2);
    gridLayout->addWidget(ui->line, 4, 2);
    ui->line->setLineWidth(1);
    gridLayout->addWidget(widgetResult, 5, 2);
    //widgetResult->setEnabled(false);
    gridLayout->addWidget(ui->lblSpacerBottom, 6, 1);
    ui->frame->setLayout(gridLayout);
}

//delete pointers created by uiSetup
void MainWindow::deleteSetupUiItems()
{
    delete ui->frame->layout();
    if (x != NULL) {
        delete x;
        delete y;
        delete result;
    }
}

void MainWindow::on_radOprAdd_clicked()
{
    ui->btnCalculate->setEnabled(true);
}

void MainWindow::on_radOprSub_clicked()
{
    ui->btnCalculate->setEnabled(true);
}

//creates an operation
void MainWindow::setupOperation()
{

    //setup operation
    deleteOperation();
    operation = factoryOperations->createOperation(type);
}

//delete the operation if exist
void MainWindow::deleteOperation()
{
    if (operation != NULL){
        delete operation;
    }
}


void MainWindow::on_btnCalculate_clicked()
{
    setupOperation();
    if (operation != NULL){
        QVariant answer;
        if (ui->radOprAdd->isChecked()){
            answer = operation->addition(x->getValue(), y->getValue());
        } else if (ui->radOprSub->isChecked()){
            answer = operation->subtraction(x->getValue(), y->getValue());
        }
        result->setValue(answer);
    }
}

void MainWindow::on_btnClear_clicked()
{
    x->clear();
    y->clear();
    result->clear();
}
