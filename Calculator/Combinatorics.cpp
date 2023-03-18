#include "Combinatorics.h"
#include <iostream>
#include <locale.h>
using namespace std;

void Combinatorics()
{
	setlocale(LC_ALL, "Rus");
	int Num_Fun;
	cout << "1. Размещение с повторением \n" << "2. Размещение без повторений \n" << "3. Сочетание с повторением\n" << "4. Сочетание без повторений\n" << "5. Перестановки\n";
	cout << "Введите номер функции: " << endl;
	cin >> Num_Fun;
	switch (Num_Fun)
	{
	case 1: Place_with_repet(); break;
	case 2: Place_without_repet(); break;
	case 3: Combin_with_repet(); break;
	case 4: Combin_without_repet(); break;
	case 5: Permutations(); break;
	default: cout << "Неправильный номер" << endl; break;
	}
}

void Place_with_repet()
{
	setlocale(LC_ALL, "Rus");
	//to do
	cout << "Функция не распознана" << endl;
}

void Place_without_repet()
{
	setlocale(LC_ALL, "Rus");
	//to do
	cout << "Функция не распознана" << endl;
}

void Combin_with_repet()
{
	setlocale(LC_ALL, "Rus");
	//to do
	cout << "Функция не распознана" << endl;
}

void Combin_without_repet()
{
	setlocale(LC_ALL, "Rus");
	//to do
	cout << "Функция не распознана" << endl;
}

void Permutations()
{
	setlocale(LC_ALL, "Rus");
	//to do
	cout << "Функция не распознана" << endl;
}