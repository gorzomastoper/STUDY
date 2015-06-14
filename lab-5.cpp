#include "stdafx.h"
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include <iostream>

using namespace std;

float f(float x)
{
	return (x/sqrt(x+x*x));
}
void main()
{
	float a, b;
	int n;
	cout<<"Введiть межi iнтегрування\n"; 
	cin >> a >> b;
	printf("Введiть кiлькiсть вiдрiзкiв iнтегрування\n"); 
	scanf("%u", &n);
	float h = (float)(b - a) / n;
	float S1 = 0, x = a;
	int i = 0;
	printf("i\tx\tF(x)\tmetod_trap\n");
	do {
		S1 += h*(float)(f(x) + f(x + h)) / 2;;
		printf("%u\t%2.6f\t%2.6f\t%2.6f\n", i, x, f(x), S1);
		i++;
		x += h;
	} while (x<b);
	printf("\n");
	float S11 = 0;
	h = 2 * h;
	x = a; i = 0;
	do {
		S11 += h*f(x);
		printf("%u\t%2.6f\t%2.6f\t%2.6f\n", i, x, f(x), S11);
		i++;
		x += h;
	} while (x<b);
	float eps1 = (float)fabs(S1 - S11) / 3;
	printf("похибка метод трапецiй =%2.6f\n", eps1);
	getch();
}
