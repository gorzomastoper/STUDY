#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <conio.h>
#pragma hdrstop

using namespace std;

double f(double x)
{
	return x / sqrt(1+x*x);
}
double simpson(double(*Fx)(double), double a, double b, int m);

int main(int argc, char* argv[])
{
	double I;
	double a, b;
	int m;

	cout << "\t-> Введіть a = ";
	cin >> a;

	cout << "\t-> Введіть b = ";
	cin >> b;

	cout << "\t-> Введіть m = ";
	cin >> m;


	I = simpson(&f, a, b, m);

	cout << endl << "      I = " << I;
	getch();
}

double simpson(double(*Fx)(double), double a, double b, int m)
{

	double h;
	h = (b - a) / m;

	double I, I2 = 0, I4 = 0;
	I4 = Fx(a + h);
	for (int k = 2; k < m; k += 2)
	{
		I4 += Fx(a + (k + 1)*h);
		I2 += Fx(a + k*h);
	}
	I = Fx(a) + Fx(b) + 4 * I4 + 2 * I2;
	I *= h / 3;

	return I;
}
