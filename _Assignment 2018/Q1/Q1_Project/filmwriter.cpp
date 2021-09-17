#include "filmwriter.h"
#include <QTextStream>
#include <QDebug>
#include <QStringList>

FilmWriter::FilmWriter(QObject *parent): QObject(parent)
{
    //pass
}

bool FilmWriter::saveFilm(Film *film, QFile *path)
{
    if(path->open(QFile::WriteOnly | QFile::Truncate))
    {
        QTextStream fout(path);
        fout << QString("Film::%1::%2::%3::%4::%5::%6")
                .arg(film->getTitle())
                .arg(film->getDuration())
                .arg(film->getDirector())
                .arg(film->getReleaseDate().year())
                .arg(film->getReleaseDate().month())
                .arg(film->getReleaseDate().day());
        return true;
    } else {
        return false;
    }
}

bool FilmWriter::loadFilm(QFile *path)
{
    QTextStream stream(path);
    if(path->open(QFile::ReadOnly))
    {
        //qDebug() << "About to read" << endl;
        QStringList strReadLst;
        QString line;
        do {
            line = stream.readLine();
            strReadLst.append(line);
            //qDebug() << line << endl;
        } while (!line.isNull());

        QStringList strLst = strReadLst[0].split("::");
        qDebug() << "Reading film data: " << strLst <<endl;
        loadedFilm = new Film();
        loadedFilm->setTitle(strLst[1]);
        loadedFilm->setDuration(strLst[2].toInt());
        loadedFilm->setDirector(strLst[3]);
        loadedFilm->setReleaseDate(QDate(strLst[4].toInt(), strLst[5].toInt(), strLst[6].toInt()));
        qDebug() << "Loaded film" << endl;
        return true;
    } else {
        return false;
    }
}

Film *FilmWriter::getLoadedFilm() const
{
    return loadedFilm;
}
