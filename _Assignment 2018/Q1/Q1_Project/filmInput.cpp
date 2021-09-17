#include "filmInput.h"
#include "ui_filmInput.h"
#include "filmwriter.h"
#include <QDebug>
#include <QFile>

FilmInput::FilmInput(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FilmInput)
{
    ui->setupUi(this);
}

FilmInput::~FilmInput()
{
    delete ui;
}

void FilmInput::on_btnSave_clicked()
{
    Film *currentFilm = new Film(ui->txtTitle->text(), ui->spnDuration->value(), ui->txtDirector->text(), ui->dteRelease->date());
    FilmWriter *writer = new FilmWriter(this);
    QFile *file = new QFile("film.txt");
    writer->saveFilm(currentFilm, file);

    delete currentFilm;
    qDebug() << "Film saved" << endl;
}

void FilmInput::on_btnLoad_clicked()
{
    FilmWriter *reader = new FilmWriter(this);
    QFile *file = new QFile("film.txt");
    if (reader->loadFilm(file))
    {
        Film *loadedFilm = reader->getLoadedFilm();
        ui->txtTitle->setText(loadedFilm->getTitle());
        ui->spnDuration->setValue(loadedFilm->getDuration());
        ui->txtDirector->setText(loadedFilm->getDirector());
        ui->dteRelease->setDate(loadedFilm->getReleaseDate());
        delete loadedFilm;
    }
    qDebug() << "Loaded film to ui" << endl;
}
