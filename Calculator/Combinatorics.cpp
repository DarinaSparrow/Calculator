#include "Combinatorics.h"
#include <iostream>
#include <locale.h>
using namespace std;

void Combinatorics()
{
	setlocale(LC_ALL, "Rus");
	int Num_Fun;
	cout << "1. ���������� � ����������� \n" << "2. ���������� ��� ���������� \n" << "3. ��������� � �����������\n" << "4. ��������� ��� ����������\n" << "5. ������������\n";
	cout << "������� ����� �������: " << endl;
	cin >> Num_Fun;
	switch (Num_Fun)
	{
	case 1: Place_with_repet(); break;
	case 2: Place_without_repet(); break;
	case 3: Combin_with_repet(); break;
	case 4: Combin_without_repet(); break;
	case 5: Permutations(); break;
	default: cout << "������������ �����" << endl; break;
	}
}

void Place_with_repet()
{
	setlocale(LC_ALL, "Rus");
	//to do
	cout << "������� �� ����������" << endl;
}

void Place_without_repet()
{
	setlocale(LC_ALL, "Rus");
	//to do
	cout << "������� �� ����������" << endl;
}

void Combin_with_repet()
{
	setlocale(LC_ALL, "Rus");
	//to do
	cout << "������� �� ����������" << endl;
}

void Combin_without_repet()
{
	setlocale(LC_ALL, "Rus");
	//to do
	cout << "������� �� ����������" << endl;
}

void Permutations()
{
	setlocale(LC_ALL, "Rus");
	//to do
	cout << "������� �� ����������" << endl;
}