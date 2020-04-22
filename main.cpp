#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>

int FindMaximum(QVector<int> array, int n);
int SortArray(QVector <int> array, int maximum);
#define MAX_SIZE = 5;

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    QVector <int> array;
    int32_t n = 0;

    array = {3, 5, 8, 4, 11, 9};

    n = 3;
    int answer = FindMaximum(array, n);
    return a.exec();
}

int FindMaximum(QVector <int> array, int n)
{
    //TODO: empty
    int maximum = INT_MAX;
    for (int i = 0; i < MAX_SIZE; ++i)
    {


    }
    return 0;
}

int SortArray(QVector <int> array, int maximum)
{
    int minimum = INT_MIN;
    if ( )
    return 0;
}
