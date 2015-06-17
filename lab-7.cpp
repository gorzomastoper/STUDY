#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <math.h>
#include <windows.h>

using namespace std;

double calculate_y(double x)
{
	return exp(pow(x,2)/2);
}

double calculate_f(double x, double y)
{
	return x*y;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	const double a = 0;
	const double b = 1;
	const double y0 = 0;
	const int n = 40;
	const double h = (b - a) / n;
	double x[n + 1];
	double y[n + 1];
	x[0] = a;
	y[0] = y0;

	for (int i = 1; i <= n; i++)
	{
		x[i] = x[i - 1] + h;
		y[i] = y[i - 1] + h * calculate_f(x[i - 1], y[i - 1]);
	}
	cout.precision(8);
	cout.setf(ios::fixed);
	for (int i = 0; i <= n; i++)
	{
		double error = abs(y[i] - calculate_y(x[i]));
		cout << "x[i] "<< x[i] << '\t' << "обчислення_y(x[i]) "<< calculate_y(x[i]) << '\t'<<"y[i] "<< y[i] << '\t' <<"помилка "<< error <<"\n";
	}
	system("pause");
	return 0;
}
