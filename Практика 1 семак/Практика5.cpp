/*

#include <windows.h>
#include <iostream>
#include <stdio.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned short H, T, S, UnitStateWord;
	printf("Введите номер головки (0-3):\n");
	scanf_s("%hu", &H);
	printf("Введите номер дорожки (0-511):\n");
	scanf_s("%hu", &T);
	printf("Введите номер сектора (0-31):\n");
	scanf_s("%hu", &S);
	UnitStateWord = (H & 3) << 14;
	UnitStateWord = (T & 0x1FF) << 5;
	UnitStateWord |= (S & 0x1F);
	printf("\nОтвет в шестнадцатиричной = %04x\nОтвет в десятичной = %hu \n", UnitStateWord, UnitStateWord);

}
*/
#include <windows.h> 
#include <iostream> 
#include <stdio.h> 

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned short H, T, S, UnitStateWord;
	int flag = 0;
	printf("\nШестнадцатиричное/Десятичное(0/Любое число):");
	scanf_s("%d", &flag);
	if (flag) { printf("Введите десятичное число"); scanf_s("%hu", &UnitStateWord); }
	else { printf("Введите шестнадцатиричное число от 0 до 0xFFFF: "); scanf_s("%hx", &UnitStateWord); }


	H = UnitStateWord >> 14;
	T = UnitStateWord >> 5 & 0x1FF;
	S = UnitStateWord & 0x1F;

	printf("Номер головки: %d\n", H);
	printf("Номер дорожки: %d\n", T);
	printf("Номер сектора: %d\n", S);
}
