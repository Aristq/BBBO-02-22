#include <stdio.h>
#include <iostream>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

m1:
	printf("\nВедите 1 и значения x,y или 0 для завершения программы\n ");
	int k;
	scanf_s("%d", &k);

	switch (k) {
	case 1: {
		double x, y;
		scanf_s("%lf", &x);
		scanf_s("%lf", &y);

		printf("x = %lf; y = %lf\n", x, y);

		if ((x >= -2) && (x <= -1) && (y <= 0) && (y >= -1.5)
			|| (x <= 2) && (x >= 1) && (y <= 0) && (y >= -1.5)
			|| (x >= -2) && (x <= 2) && (y <= -1) && (y >= -1.5)
			|| (x >= -1) && (x <= 1) && (y >= 0) && (y <= 1))
		{
			printf("Попадает в область\n");
		}

		else
		{
			printf("Не попадает в область\n");
		}
		goto m1;
	}

	case 0: break;

	}
}

