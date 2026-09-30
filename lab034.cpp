// Lab_03_4.cpp 
// Дем'ян Аліна
// Лабораторна робота № 3.4 
// Розгалуження, задане плоскою фігурою. 
// Варіант 0.1 
#include <iostream> 
using namespace std;
int main()
{
	double x;  // вхідний аргумент 
	double y;  // вхідний параметр 
	double R;  // вхідний параметр
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// розгалуження в повній формі 
	if (((x + R) * (x + R) + (y - R) * (y - R) <= R * R) ||
		(x >= 0 && x <= 2 * R && y >= -R && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}