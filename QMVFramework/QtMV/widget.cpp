#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    model = new QStandardItemModel();

    model->setHorizontalHeaderItem(0, new QStandardItem("Author"));
    model->setHorizontalHeaderItem(1, new QStandardItem("Year"));
    model->setHorizontalHeaderItem(2, new QStandardItem("Title"));
    model->setHorizontalHeaderItem(3, new QStandardItem("Journal"));
    model->setHorizontalHeaderItem(4, new QStandardItem("Volume"));
    model->setHorizontalHeaderItem(5, new QStandardItem("Issue"));
    model->setHorizontalHeaderItem(6, new QStandardItem("Pages"));

    modelProxy = new QSortFilterProxyModel();
    modelProxy->setSourceModel(model);

    ui->tableView->setModel(modelProxy);
    ui->tableView->setSortingEnabled(true);

    delegate = new Delegate();
    ui->tableView->setItemDelegate(delegate);

    ui->spnYear->setMaximum(QDate::currentDate().year());


    appendRow("Max", "2001", "The Maximus", "JD 32", "23", "1", "350");
    appendRow("Sam", "2003", "The Samsire", "STS 331", "213", "2", "354");
    appendRow("Shara", "2014", "The Shara Cronicals", "STHSC 122", "233", "13", "341");

    //setCombobox
    QStringList cmbLst;
    cmbLst << "Author" << "Year" << "Title" << "Journal" << "Volume" << "Issue";
    ui->comboBox->addItems(cmbLst);


    QRegularExpression rx("^\\w+$");
    QValidator *validator = new QRegularExpressionValidator(rx);
    ui->txtAuthor->setValidator(validator);

    QObject::connect(model, SIGNAL(itemChanged(QStandardItem*)),
                     this, SLOT(on_itemChanged(QStandardItem*)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::appendRow(QString author, QString year, QString title, QString journal, QString volume, QString issue, QString pages)
{
    QList<QStandardItem*> rowLst;
    rowLst.append(new QStandardItem(author));
    rowLst.append(new QStandardItem(year));
    rowLst.append(new QStandardItem(title));
    rowLst.append(new QStandardItem(journal));
    rowLst.append(new QStandardItem(volume));
    rowLst.append(new QStandardItem(issue));
    rowLst.append(new QStandardItem(pages));
    model->appendRow(rowLst);
}

void Widget::on_btnAdd_clicked()
{
    appendRow(ui->txtAuthor->text(),
              QString::number(ui->spnYear->value()),
              ui->txtTitle->text(),
              ui->txtJournal->text(),
              QString::number(ui->spnVolume->value()),
              QString::number(ui->spnIssue->value()),
              ui->txtPages->text());
}

void Widget::on_btnRemove_clicked()
{
    const QModelIndex index = ui->tableView->currentIndex();
    if(index.isValid()){
        modelProxy->removeRow(index.row());
    }
}

void Widget::on_btnFind_clicked()
{
    int column = ui->comboBox->currentIndex();
    modelProxy->setFilterKeyColumn(column);
    modelProxy->setFilterWildcard(ui->txtSearch->text());
}

void Widget::on_btnReset_clicked()
{
    modelProxy->setFilterFixedString("");
}

void Widget::on_itemChanged(QStandardItem *item)
{
    QModelIndex index = item->index();
    int col = index.column();
    if (col == 1){
        if(index.data().toInt() > QDate::currentDate().year())
            item->setData(QVariant(QDate::currentDate().year()), Qt::DisplayRole);
    }
}
