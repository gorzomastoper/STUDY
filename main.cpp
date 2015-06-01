#include "stdafx.h"
# include<stdio.h>
# include<conio.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	int i, j, k, n;
	double a[10][10], x[10];
	double s, p;
	cout<<"Розмiрнiсть матрицi : ";
	cin>>n;
	cout<<"\nВведiть коефiцiєнти матрицi :\n\n";\
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "a[" << i + 1 << "]" << "[" << j + 1 << "]= ";//Тут збільшується число
			cin >> a[i][j];
		}
		cout<<"b["<<i+1<<"]= ";
		cin>>a[i][n];
	}
	for (k = 0; k < n - 1; k++)
	{
		for (i = k + 1; i < n; i++)
		{
			p = a[i][k] / a[k][k];
			for (j = k; j < n + 1; j++)
				a[i][j] = a[i][j] - p*a[k][j];
		}
	}
	x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];
	for (i = n - 2; i >= 0; i--)
	{
		s = 0;
		for (j = i + 1; j < n; j++)
		{
			s += (a[i][j] * x[j]);
			x[i] = (a[i][n] - s) / a[i][i];
		}
	}
	cout<<"\nРезультат:\n";
	for (i = 0; i < n; i++)
	{
		cout<<"\nx["<< i + 1 <<"] = "<< x[i];
	}
	getch();
}
