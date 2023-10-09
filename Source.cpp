// Lab_03_4.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний аргумент
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if ((x * x + y * y <= R * R && y >= 0) ||
		y >= -R && y <= x && x <= 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}