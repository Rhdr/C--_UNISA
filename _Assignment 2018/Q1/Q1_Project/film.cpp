#include "film.h"

Film::Film()
{
    this->title = "No title";
    this->duration = 0;
    this->director = "No Director";
    this->releaseDate = QDate(2000, 1, 1);
}

Film::Film(QString title_, int duration_, QString director_, QDate releaseDate_):
    title(title_), duration(duration_), director(director_), releaseDate(releaseDate_)
{
    //intentionally left blank
}

QString Film::getTitle() const
{
    return title;
}

void Film::setTitle(const QString &value)
{
    title = value;
}

int Film::getDuration() const
{
    return duration;
}

void Film::setDuration(int value)
{
    duration = value;
}

QString Film::getDirector() const
{
    return director;
}

void Film::setDirector(const QString &value)
{
    director = value;
}

QDate Film::getReleaseDate() const
{
    return releaseDate;
}

void Film::setReleaseDate(const QDate &value)
{
    releaseDate = value;
}




