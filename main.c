#include <stdio.h>
#include "myarrfunc.h"
//gcc main.c myarrfunc.c -o main

/*
a Задать размер массива
b Заполнить массив
c Представление массива (значения, адреса)
d [Функция 1] \
e [Функция 2] > (название вашей функции)
f [Функция 3] /
g Выход
Выберите пункт:
*/
int main()
{   
    int n=0;




    char vub ='z';
    double arrptr[1000];
    int flag=0;
    while (vub != 'g')
    {   
        printf("a Задать размер массива\n");
        printf("b Заполнить массив\n");
        printf("c Представление массива\n");
        printf("d Определение максимального и минимального значения массива\n");
        printf("e Вычисление среднего арифметического элементов всего массива\n");
        printf("f Вычисление суммы элементов, значения которых ниже среднего значения массива\n");
        printf("g Выход\n");
        printf("Выберите пункт:\n");

        if (scanf(" %c", &vub) != 1) //благодаря пробелу перед %c, оставшийся в буфере ентер не считается повторно
        {
            break; //благодаря этому условию, ЕОФ остановит прогу
        }
        switch(vub)
        {
            case 'a':
                
                printf("Введите размер массива:\n");
                if (scanf("%d", &n) != 1)
                {
                    printf("Ошибка, введите число\n");
                    while (getchar()!='\n');  
                    break;
                }
                flag=0;
                break;
            case 'b':
                if (n==0)
                {
                    printf("Ошибка, сначала введите размер массива\n");
                    break;
                }
                printf("Заполните массив:\n");
                for (int i =0; i<n; i++)
                {   
                    scanf("%lf", &arrptr[i]);
                }
                flag=1;
                break;
            case 'c':
                if (n==0)
                {
                    printf("Ошибка, сначала введите размер массива\n");
                    break;
                }
                if (flag==0)
                {
                    printf("Ошибка, массив не заполнен\n");
                    break;
                }
                printf("Элементы массива:\n");
                for (int i =0; i<n; i++)
                {   
                    printf("Элемент: %.2f. Адрес: %p\n", arrptr[i], &arrptr[i]);
                }
                break;
            case 'd':
                if (n==0)
                {
                    printf("Ошибка, сначала введите размер массива\n");
                    break;
                }
                if (flag==0)
                {
                    printf("Ошибка, массив не заполнен\n");
                    break;
                }
                double ma = 0;
                double mi = 0;
                mima(arrptr, n, &ma, &mi);
                printf("Максимальное число: %.2f\nМинимальное число: %.2f\n", ma, mi);
                break;
            case 'e':
                if (n==0)
                {
                    printf("Ошибка, сначала введите размер массива\n");
                    break;
                }
                if (flag==0)
                {
                    printf("Ошибка, массив не заполнен\n");
                    break;
                }
                printf("Среднее арифметическое массива: %.2f\n", srarif(arrptr, n));
                break;
            case 'f':
                if (n==0)
                {
                    printf("Ошибка, сначала введите размер массива\n");
                    break;
                }
                if (flag==0)
                {
                    printf("Ошибка, массив не заполнен\n");
                    break;
                }
                printf("Сумма элементов, меньших среднего арифметического массива: %.2f\n", suma(arrptr,n));
                break;
            case 'g':
                break;
            default:
                printf("Ошибка, выберите пункт a-g\n");

        }

    }




}