// Lab_03_2.cpp
// < ������ ������ ������������� >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 18

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������

	std::cout << "������ ����� �����: "; std::cin >> x;
	std::cout << "�� ����� ���� ������: "; std::cin >> a;
	std::cout << "�� � �� ����: "; std::cin >> b;
	std::cout << "�� �����, �� ������: "; std::cin >> c;



	// ����� 1: ������������ � ��������� ����
	if ((x<0) && (b!=0))
		F = (a*x*x)-(b*x*x);
	if ((x>0)&&(b=0))
		F = (x - a) / (x - c);
	if (!((x < 0) && (b != 0)) && !((x > 0) && (b = 0)))
		F = (x+5)/(c*(x-10));
	cout << endl;
	cout << "1) F = " << F << endl;
	// ����� 2: ������������ � ����� ����
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

