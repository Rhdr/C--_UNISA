#include "filmwriter.h"
#include <QTextStream>
#include <QDebug>
#include <QStringList>
#include <QMetaObject>
#include <QMetaProperty>
#include <QVariant>

FilmWriter::FilmWriter(QObject *parent): QObject(parent)
{
    //pass
}

bool FilmWriter::saveFilm(QObject *qObj, QFile *path)
{
    const QMetaObject *metaObj = qObj->metaObject();
    qDebug() << "Property Count: " << metaObj->propertyCount();
    int count = metaObj->propertyCount();

    QString str = "Film::";
    for (int i = 1; i < count; i++){
        QMetaProperty metaProperty = metaObj->property(i);
        const char *propertyName = metaProperty.name();
        QVariant value = qObj->property(propertyName);
        qDebug() << propertyName << " : " << value.toString();
        str += QString("%1::").arg(value.toString());
    }

    if(path->open(QFile::WriteOnly | QFile::Truncate)){
        QTextStream fout(path);
        fout << str;
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
