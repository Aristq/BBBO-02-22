#include <stdio.h>
#include <windows.h>
#include <iostream>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[20];
	int i = 0, m = 1000, c = 0,k=0;
	printf("Введите длину массива(5-20) > ");
	scanf_s("%d", &i);
	if ((i < 5) || (i > 20))
	{
		printf("Ошибка в длинне массива");
		return 0;
	}
	printf("\n");
	for (c = 1; c <= i; c++)
	{
		printf("Введите элемент массива (-100-100) > ");
		scanf_s("%d", &a[c]);
		if ((a[c] < -100) || (a[c] > 100))//Программа игнорирует числа, не входящие в промежуток
		{
			printf("Введите элемент массива \n");
			scanf_s("%d", &a[c]);


		}
	}
	
	for (c = 0; c < i; c++) {
		if (a[c] <= 0) {
			k++;
			if (k == i) {
				printf("В массиве не найдено ни одного положительного элемента");
				return 0;
			}
		}
	}
	printf("\n");
	for (c = 1; c <= i; c++)
	{
		if ((a[c] < m) && (a[c] > 0))//Находим минимальное число в массиве
			m = a[c];

	}
	
	for (c = 1; c <= i; c++)//Заменяем отрицательные числа на минимальное положительное
	{
		if (a[c] <= 0)
			a[c] = m;
	}
	
	for (c = 1; c <= i; c++)
		printf("%d ", a[c]);
	return 0;
}