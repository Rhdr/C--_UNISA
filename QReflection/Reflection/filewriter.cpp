#include "filewriter.h"

FileWriter::FileWriter(QObjectList *olist, QString fname) :
    list(olist), fileName(fname)
{
    //
}

int FileWriter::write()
{
    QFile file(fileName);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream out(&file);
        QString outputStr;
        int counter = 0;

        //QMeta
        for(int i = 0; i < list->length(); i++){
            const QObject* obj = list->at(i);
            const QMetaObject* meta = obj->metaObject();
            for(int j = 0; j < meta->propertyCount(); j++){
                const QMetaProperty property = meta->property(j);
                QVariant value = property.read(obj);
                out << value.toString() << '\n';
                counter++;
            }
        }

        //Output
        out << outputStr;

        return counter;

    } else {
        throw("Can't open the file");
    }


}
