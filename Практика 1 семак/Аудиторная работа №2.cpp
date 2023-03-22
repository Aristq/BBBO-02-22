#include <iostream>
#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int l, c, mas[10][10];
    int sum[10];
    printf("Введите количество строк и колонок : ");
    scanf_s("%d %d", &l, &c);
    mas[l][c];
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("Введите число:");
            scanf_s("%d", &mas[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", mas[i][j]);
            if (j == c - 1) {
                printf("\n");
            }
        }
    }
}