#ifndef FILMWRITER_H
#define FILMWRITER_H

#include <QObject>
#include <QString>
#include <QFile>
#include "film.h"

class FilmWriter : public QObject
{
    Q_OBJECT

public:
    explicit FilmWriter(QObject *parent);
    bool saveFilm(Film *film, QFile *path);
    bool loadFilm(QFile *path);

    Film *getLoadedFilm() const;

signals:

public slots:

private:
    Film *loadedFilm;
    int *a;
};

#endif // FILMWRITER_H
