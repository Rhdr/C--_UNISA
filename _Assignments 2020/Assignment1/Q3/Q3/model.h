#ifndef MODEL_H
#define MODEL_H

#include <QStandardItemModel>

class Model : public QStandardItemModel
{
    Q_OBJECT
public:
    explicit Model(QObject *parent = 0);
    bool connect();

private:
    bool setData(const QModelIndex &index, const QVariant &value, int role);

signals:

public slots:

};

#endif // MODEL_H
