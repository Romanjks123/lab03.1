// Lab_03_1.cpp
// < Огоновський Роман >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 24

#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
#include <cmath>


 int main() 
{
	double A;
	double B;
	double x;
	double y;

	cout << "x ="; cin >> x;

	A = x;
	if (x <= -1) {
		B = log10(abs(cos(x * 5))) + pow(M_E, ((1 / x) + x));
	}
	
	if (-1 <= x && x <= 0.4) {
		B = sqrt(pow(2 - x, 3)) - tan(x);
	}

	if (x >= 0.4) {
		B = sin(x * 5) - sqrt(abs(1 - x));
	}
	cout << endl;

	y = A + B;
	cout << "1) y=" << y << endl;




	if (x <= -1) {
		B = log10(abs(cos(x * 5))) + pow(M_E, ((1 / x) + x));

	}
	else
	{
		if (x >= 0.4) {
			B = sin(x * 5) - sqrt(abs(1 - x));
		}
		else
		{
			B = sqrt(pow(2 - x, 3)) - tan(x);

		}
	}

	y = A + B;
	cout << "2) y=" << y << endl;
	cin.get();
	return 0;
}