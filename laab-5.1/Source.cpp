// Lab_05_1.cpp
// <Василик Юлія>
// Лабораторна робота №5.1
// Функції, що містять арифметичний вираз
// Варіант 2

#include <iostream>
#include <cmath>

using namespace std;

double k(const double x, const double y); // прототип

int main()
{
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	double c = (pow(k(p + sqrt(q), q - sqrt(p)), 2) - k(1, p + q));
	cout << "c = " << c << endl;
	return 0;
}
double k(const double x, const double y) // визначення
{
	return (x / (abs(x * x * x + y * y * y)) + y / (abs(x + y)));
}

