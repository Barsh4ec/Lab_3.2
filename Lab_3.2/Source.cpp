// Lab_03_2.cpp
// Борща Тараса Ігоровича
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 2

#include <iostream>

using namespace std;

int main()
{
	double x; //змінна х
	double a; //змінна а
	double b; //змінна б
	double c; //змінна с
	double F; //результат обчислення виразу

	cout << " x= "; cin >> x;
	cout << " a= "; cin >> a;
	cout << " b= "; cin >> b;
	cout << " c= "; cin >> c;

	//Розгалуження в скороченій формі

	if (((x + 5) < 0) && c == 0)
		F = (1. / (a * x)) - b;
	if (((x + 5) > 0) && c != 0)
		F = (x - a) / x;
	if (!(((x + 5) < 0) && c == 0) && !(((x + 5) > 0) && c != 0))
		F = (10 * x) / (c - 4);

	cout << endl;
	cout << "1) F=" << F << endl;

	//Розгалуження в повній формі

	if (((x + 5) < 0) && c == 0)
		F = (1. / (a * x)) - b;
	else
		if (((x + 5) > 0) && c != 0)
			F = (x - a) / x;
		else
			F = (10 * x) / (c - 4);

	cout << endl;
	cout << "2) F=" << F << endl;

	cin.get();
	return 0;
}