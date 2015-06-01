#include "stdafx.h"
#include<math.h>
#include<stdio.h>
#include<conio.h>
float F(float);
void main()
{
	float a, b;
	int n;
	//clrscr();
	printf("Vvedu megi integryvannya\n"); scanf("%f%f", &a, &b);
	printf("Vvrdu kilkist vidrizkiv integryvannya\n"); 
	scanf("%u", &n);
	float h = (float)(b - a) / n;
	float S1 = 0, S2 = 0, S3 = 0, x = a;
	int i = 0;
	printf("i\tx\tF(x)\tpravi_pr\tlivi_pr\tcentr_pr\n");
	do{
		S1 += h*F(x);
		S2 += h*F(x + h);
		S3 += h*F((float)(x + x + h) / 2);
		printf("%u\t%2.6f\t%2.6f\t%2.6f\t%2.6f\t%2.6f\n", i, x, F(x), S1, S2, S3);
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
		S33 += h*F((float)(x + x + h) / 2);
		5;
		printf("%u\t%2.6f\t%2.6f\t%2.6f\t%2.6f\t%2.6f\n", i, x, F(x), S11, S22, S33);
		i++;
		x += h;
	} while (x<b);
	float eps1 = (float)fabs(S1 - S11) / 3;
	float eps2 = (float)fabs(S2 - S22) / 3;
	float eps3 = (float)fabs(S3 - S33) / 3;
	printf("pohibka pravuh_pr =%2.6f\n", eps1);
	printf("pohibka livuh_pr =%2.6f\n", eps2);
	printf("pohibka centr_pr =%2.6f\n", eps3);
	getch();
}
float F(float x)
{
	return(pow(x, 4));
}
