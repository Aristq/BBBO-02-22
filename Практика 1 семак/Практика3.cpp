#include <iostream>
#include <math.h>
#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float x, y, z, u;
    char a;
    scanf_s("%c", &a, 1);
    switch (a)
    {
    case'1':case '2': {float x, y, z, u;
        printf("Введите x, y, z ");
        scanf_s(" %f%f%f", &x, &y, &z);

        if ((pow(x, 2) + pow(y, 2) + 2) == 0)
        {
            printf("error\n");
            break;
        }
        u = ((pow(8 + pow(fabs(x - y), 2) + 1, 0.3333)) / (pow(x, 2) + pow(y, 2) + 2) - exp(fabs(x - y)) * (pow(tan(z) * tan(z) + 1, x)));
        printf("%f", u);
    }
           break;
    case'3':
    {x = -4.5, y = 0.75 * pow(10, -4), z = 0.845 * pow(10, 2);
    u = ((pow(8 + pow(fabs(x - y), 2) + 1, 0.3333)) / (pow(x, 2) + pow(y, 2) + 2) - exp(fabs(x - y)) * (pow(tan(z) * tan(z) + 1, x)));
    printf("%f", u);
    }
    break;
    case'4':case'5':case'6':break;
    default:
    { printf_s("error 7878");
    }
    break;
    }
}