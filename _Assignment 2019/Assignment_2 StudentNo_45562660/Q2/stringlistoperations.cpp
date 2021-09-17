#include "stringlistoperations.h"
StringListOperations::StringListOperations(){
    separator = ';';
}

QVariant StringListOperations::addition(QVariant x, QVariant y)
{
    QString xStr = x.toStringList().join(separator).toUpper();
    QString yStr = y.toStringList().join(separator).toUpper();
    QString z = QString("%1%2%3").arg(xStr).arg(separator).arg(yStr);
    QStringList zLst = z.split(separator);
    zLst.removeDuplicates();
    return QVariant(zLst);
}

QVariant StringListOperations::subtraction(QVariant x, QVariant y)
{
    QStringList xStrLst = x.toStringList();
    for (int i = 0; i < xStrLst.length(); i++){
        xStrLst[i] = xStrLst[i].toUpper();
    }
    QStringList yStrLst = y.toStringList();
    for (int i = 0; i < yStrLst.length(); i++){
        if (xStrLst.contains(yStrLst[i].toUpper())){
            xStrLst.removeAt(xStrLst.indexOf(QRegExp(yStrLst[i].toUpper())));
        }
    }

    return QVariant(xStrLst);
}

