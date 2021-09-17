#include "categorylist.h"

  CategoryList::CategoryList(){

  }

  //add & count categories (on duplicate increase counter only)
  void CategoryList::add(int category)
  {
      int indexOfCat = indexOf(category);
      if (indexOfCat == -1){
          //new category
          CategoryItem catItem;
          catItem.category = category;
          catItem.count = 1;
          categoryLst.append(catItem);
          emit newCategoryAdded(category);
      } else {
          //existing category
          categoryLst[indexOfCat].count++;
      }
  }

  //remove & count categories (if existing category decrease counter only, else delete)
  void CategoryList::remove(int category)
  {
      int indexOfCat = indexOf(category);
      if (indexOfCat != -1){
          //item exist
          categoryLst[indexOfCat].count--;
          if(categoryLst[indexOfCat].count == 0){
              //category not in use, delete it
              categoryLst.removeAt(indexOf(category));
              emit deletedCategory(category);
          }

      }
  }

  //if exist return the index pos of the given category else return -1
  int CategoryList::indexOf(int category) const
  {
      for (int i = 0; i < categoryLst.length(); i++){
          if (categoryLst[i].category == category){
              return i;
          }
      }
      return -1;
  }

  QStringList CategoryList::getCategoryStringList() const
  {
      QStringList strLst;
      foreach(CategoryItem catItem, categoryLst){
          strLst.append(QString("%1").arg(catItem.category));
      }
      return strLst;
  }
