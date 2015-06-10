#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <windows.h>

using namespace std;

float F(float x)
{
	return x/1+x;
}

void main()
{
	//setlocale(LC_ALL, "chcp 1251");
	system("chcp 1251");
	float a, b;
	int n;
	printf("Введіть межі інтегрування\n"); 
	scanf("%f%f", &a, &b);
	printf("Введіть кількість відрізків інтегрування\n"); 
	scanf("%u", &n);
	float h = (b - a) / n;
	float S1 = 0, S2 = 0, S3 = 0, x = a;
	int i = 0;
	printf("i\tx\tF(x)\tправі_пр\tліві_пр\tцентр_пр\n");
	do{
		S1 += h*F(x);
		S2 += h*F(x + h);
		S3 += h*F((x + x + h) / 2);
		//cout << "\t" << i << "\t" << x << "\t" << F(x) << "\t" << S1 << "\t" << S2 << "\t" << S3 << "\n";
		printf("%u\t%2.6f\t%2.6f\t%2.6f\t%2.6f\t%2.6f\n", i + 1, x, F(x), S1, S2, S3);
		i++;
		x += h;
	} while (x<b);
	printf("\n");
	float S11 = 0, S22 = 0, S33 = 0;
	h = 2 * h;
	x = a; i = 0;
	do{
		S11 += h*F(x);
		S22 += h*F(x + h);
		S33 += h*F((x + x + h) / 2);
		5;
		printf("%u\t%2.6f\t%2.6f\t%2.6f\t%2.6f\t%2.6f\n", i+1, x, F(x), S11, S22, S33);
		//cout << "\t" << i << "\t" << x << "\t" << F(x) << "\t" << S11 << "\t" << S22 << "\t" << S33 << "\n";
		i++;
		x += h;
	} while (x<b);
	float eps1 = fabs(S1 - S11) / 3;//-
	float eps2 = fabs(S2 - S22) / 3;//-
	float eps3 = fabs(S3 - S33) / 3;//-
	printf("похибка правих_пр =%2.6f\n", eps1);
	printf("похибка лівих_пр =%2.6f\n", eps2);
	printf("похибка централь_пр =%2.6f\n", eps3);
	getch();
}
