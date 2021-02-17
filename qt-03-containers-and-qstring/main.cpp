#include <QCoreApplication>
#include <QDebug>
#include <QStack>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QString> names;
    names << "Mary" << "Ann" << "Charlynn" << "Marylynn" << "Margaret"
          << "Kate" << "Rose" << "Gwendolyn";


    // TODO: using Java-style iterators print the longest name from the list
    // use QString::arg to output message with this name


    // TODO: using STL-style iterators print the shortest name from the list
    // use QString::prepend and append to output message with this name


    // TODO: using foreach and QStringList show all names with "lynn" suffix
    // and print it separated by ',' as one string


    // print all names in reverse order
    // TODO: 1. Using QStack

    // TODO: 2. Using other QList

    // TODO: 3. Without other containers

    return a.exec();
}
