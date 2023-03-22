#include <iostream> 
#include <windows.h> 

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int count_m, step0 = 0;
    float n[30], min_num = -1, summ = 0;

A1: printf("Введите размер массива от 1 до 30:\n");
    scanf_s("%d", &count_m);
    if (count_m < 1 || count_m > 30)
    {
        printf("Размер массива не входит в рамки,введите ещё раз\n");
        goto A1;
    }

    for (int step = 0; step < count_m; step++)
    {
        printf("Введите %dе значение\n", step + 1);
        scanf_s("%f", &n[step]);
        if (n[step] > 0 && min_num < 0)
        {
            min_num = n[step];
            step0 = step + 1;
        }
        else
        {
            if (min_num > n[step] && n[step] > 0)
            {
                min_num = n[step];
                step0 = step + 1;
            }
        }
    }

    for (; step0 < count_m; step0++)
    {
        summ += n[step0];
    }

    if (min_num < 0) printf("Положительных чисел нет\n");
    else printf("Сумма элементов массива расположенных после наименьшего положительного элемента = %f", summ);
}