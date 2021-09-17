#ifndef CATEGORYLIST_H
#define CATEGORYLIST_H
#include <QObject>
#include <QList>
#include <QDebug>

struct CategoryItem{
public:
    int category;
    int count;
};

class CategoryList : public QObject
{
    Q_OBJECT

public:
    explicit CategoryList();
    //add & count categories (on duplicate increase counter only)
    void add(int category);
    //remove & count categories (if existing category decrease counter only, else delete)
    void remove(int category);
    //if exist return the index pos of the given category else return -1
    int indexOf(int category) const;
    //return qStringList of Categories
    QStringList getCategoryStringList() const;

signals:
    void newCategoryAdded(int);
    void deletedCategory(int);

private:
    QList<CategoryItem> categoryLst;
};

#endif // CATEGORYLIST_H
