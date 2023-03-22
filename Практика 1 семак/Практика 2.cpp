#include<iostream>
#include<math.h>
#include<stdio.h>


int main()
{
	float x, y, z, u;
	printf("Print x, y, z: ");
	scanf_s("%f%f%f", &x, &y, &z);
	u = ((pow(8 + pow(fabs(x - y), 2) + 1, 0.3333)) / (pow(x, 2) + pow(y, 2) + 2) - exp(fabs(x - y)) * (pow(tan(z) * tan(z) + 1, x)));
	printf("%f", u);

}