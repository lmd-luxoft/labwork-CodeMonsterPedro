#include <QCoreApplication>
#include <QDebug>
#include <QStack>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QString> names;
    names << "Mary" << "Ann" << "Charlynn" << "Marylynn" << "Margaret"
          << "Kate" << "Rose" << "Gwendolyn";

    QListIterator<QString> javaIterator(names);
    int maxLength = 0;
    QString max = "";
    while(javaIterator.hasNext()) {
        QString currentName = javaIterator.next();
        if(currentName.length() > maxLength){
            maxLength = currentName.length();
            max = currentName;
        }
    }
    QString output("Longest name: %1");
    qDebug() << output.arg(max);

    int minLength = names.at(0).length();
    QString min = names.at(0);
    for (QList<QString>::iterator i = names.begin();i != names.end(); ++i){
        if(i->length() < minLength){
            minLength = i->length();
            min = *i;
        }
    }
    qDebug() << min.prepend("Shortest name: ");

    QStringList strl;
    foreach(QString str, names){
        strl.append(str);
    }
    strl = strl.filter("lynn");
    qDebug() << strl.join(',');

    // print all names in reverse order
    qDebug() << "STACK";
    QStack<QString> stack;
    for (int i = 0; i < names.length(); i++){
        stack.push(names.at(i));
    }
    int len = stack.length();
    for (int i = 0; i < len; i++){
        qDebug() << stack.pop();
    }
    qDebug() << "QLIST";
    QList<QString> strll;
    for (int i = names.length() - 1; i >= 0; i--){
        strll << names.at(i);
    }
    for (int i = 0; i < strll.length(); i++){
        qDebug() << strll.at(i);
    }
    qDebug() << "NO QLIST";
    for (QList<QString>::iterator i = names.end() - 1;i != names.begin() - 1; --i){
        qDebug() << QString(*i);
    }

    return a.exec();
}
