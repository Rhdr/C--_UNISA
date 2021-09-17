#ifndef FILMINPUT_H
#define FILMINPUT_H

#include <QMainWindow>
#include "film.h"

namespace Ui {
class FilmInput;
}

class FilmInput : public QMainWindow
{
    Q_OBJECT

public:
    explicit FilmInput(QWidget *parent = 0);
    ~FilmInput();

private slots:
    void on_btnSave_clicked();
    void on_btnLoad_clicked();

private:
    Ui::FilmInput *ui;
    Film *currentFilm;
};

#endif // FILMINPUT_H
