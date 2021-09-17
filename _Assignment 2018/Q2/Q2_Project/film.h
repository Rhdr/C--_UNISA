#ifndef FILM_H
#define FILM_H

#include <QObject>
#include <QString>
#include <QDate>

class Film : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString title READ getTitle WRITE setTitle)
    Q_PROPERTY(int duration READ getDuration WRITE setDuration)
    Q_PROPERTY(QString director READ getDirector WRITE setDirector)
    Q_PROPERTY(QDate releaseDate READ getReleaseDate WRITE setReleaseDate)
public:
    explicit Film();
    explicit Film(QString title_, int duration_, QString director_, QDate releaseDate_);

    QString getTitle() const;
    void setTitle(const QString &value);
    int getDuration() const;
    void setDuration(int value);
    QString getDirector() const;
    void setDirector(const QString &value);
    QDate getReleaseDate() const;
    void setReleaseDate(const QDate &value);

signals:

public slots:

private:
    QString title;
    int duration;
    QString director;
    QDate releaseDate;
};

#endif // FILM_H
