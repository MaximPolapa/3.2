// Lab_03_2.cpp
// < Полапа Максим Олександрович >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 18

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу

	std::cout << "Введіть якесь число: "; std::cin >> x;
	std::cout << "Ще треба одне ввести: "; std::cin >> a;
	std::cout << "Ну і ще одне: "; std::cin >> b;
	std::cout << "Ну добре, це останнє: "; std::cin >> c;



	// спосіб 1: розгалуження в скороченій формі
	if ((x<0) && (b!=0))
		F = (a*x*x)-(b*x*x);
	if ((x>0)&&(b=0))
		F = (x - a) / (x - c);
	if (!((x < 0) && (b != 0)) && !((x > 0) && (b = 0)))
		F = (x+5)/(c*(x-10));
	cout << endl;
	cout << "1) F = " << F << endl;
	// спосіб 2: розгалуження в повній формі
	if ((x < 0) && (b != 0))
		F = (a * x * x) - (b * x * x);
	else
		if ((x > 0) && (b = 0))
			F = (x - a) / (x - c);
		else
			F = (x + 5) / (c * (x - 10));
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}

