//вариант 5
//функции 1, 12, 29

#include "myarrfunc.h"

int mima(double *arrptr, size_t n, double *ma, double *mi) //Определение максимального и минимального значения массива
{
    if (n==0)
    {
        return -1;
    }

    *ma = arrptr[0] ; //дергаем первый элемент из массива
    *mi = arrptr[0] ;
    for (int i = 0; i<n; i++)
    {
        if (arrptr[i]>*ma)
        {
            *ma=arrptr[i];
        }
        if (arrptr[i]<*mi)
        {
            *mi=arrptr[i];
        }
    }
    return 0;
}

double srarif(double *arrptr, size_t n) //Вычисление среднего арифметического элементов всего массива
{
    double sum=0;
    int k=0;
    for (int i = 0;i<n;i++)
    {
        k=k+1;
        sum= sum + arrptr[i];
    }
    return (sum/k);
}

double suma(double *arrptr, size_t n) //Вычисление суммы элементов, значения которых ниже среднего значения массива
{
    if (n==0)
    {
        return 0;
    }

    double s = 0;
    
    for (int i = 0; i<n; i++)
    {
        
        if (arrptr[i] < srarif(arrptr, n))
        {
            s=s+arrptr[i];
        }
    }
    return s;
}