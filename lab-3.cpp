#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int size;
	cout << "Введіть розмірність матриці: ";
	cin >> size;
	cout << endl;
	vector <vector <double> > matrix;
	matrix.resize(size);
	cout << "Введіть елементи масиву " << size << "x" << size + 1 << ": " << "\n";
	for (int i = 0; i < size; i++)
	{
		matrix[i].resize(size + 1);

		for (int j = 0; j < size + 1; j++)
		{
			cout << "a[" << i + 1 << "]" << "[" << j + 1 << "]";
			cin >> matrix[i][j];
		}
	}
	double eps;
	cout << "\n";
	cout << "Введіть точність: ";
	cin >> eps;
	vector <double> previousVariableValues(size, 0.0);
	while (true)
	{       
		vector <double> currentVariableValues(size);
		for (int i = 0; i < size; i++)
		{
			currentVariableValues[i] = matrix[i][size];
			for (int j = 0; j < size; j++)
			{
				if (i != j)
				{
					currentVariableValues[i] -= matrix[i][j] * previousVariableValues[j];
				}
			}
			currentVariableValues[i] /= matrix[i][i];
		}
		double error = 0.0;

		for (int i = 0; i < size; i++)
		{
			error += abs(currentVariableValues[i] - previousVariableValues[i]);
		}
		if (error < eps)
		{
			break;
		}
		previousVariableValues = currentVariableValues;
	}

	for (int i = 0; i < size; i++)
	{
		printf("%2.8llf ", previousVariableValues[i]);
	}
	cout << "\n";
	system("pause");
	return 0;
}
