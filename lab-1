// Win32Project1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
float f(float x)
{
	return (pow(x, 4))+(5*x)-7;//Тут ваша формула
}

float n(float a, float b, float e)
{
	setlocale(LC_ALL, "Rus");
	cout << "##################################"<<"\n";
	cout << "#  дiлення      ||    f(x)       #"<<"\n";
	cout << "##################################"<<"\n";
	float x = (a + b) / 2;
	while (abs(f(x)) > e)
	{
		if (f(x) > 0)
			b = x;
		else a = x;
		x = (a + b) / 2;
		cout <<"||\t"<< b <<"\t||"<< " "<< f(x) << "\t|| \n"<<"\n";
	}
	return x;
}
void main()
{
	cout << n(0,100,0.001) << "\n";//В цих полях можна міняти значення, остання цифра, це похибка.
	cin.get();
}
