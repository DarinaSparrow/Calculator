#define _CRT_SECURE_NO_WARNINGS
#include "Matrix.h"
#include <iostream>
using namespace std;

void Matrix()
{
	setlocale(LC_ALL, "RUSSIAN");
	int num;
	do
	{
		cout << "";
		cin >> num;
	} while ((num < -1) || (num > 8));
	switch (num)
	{
	case 1: Addition(); break;
	case 2: Subtraction(); break;
	case 3: Multiplication(); break;
	case 4: Add_with_Num(); break;
	case 5: Transposition();  break;
	case 6: Inverse_M(); break;
	case 7: Determinant(); break;
	case 0:;
	}
}

void Input_1()
{
	Matrix_1 element;
	int M, N;
	cout << "Введите размерность матрицы. " << endl << "Количество строк: ";
	cin >> M;
	cout << endl << "Количество столбцов: ";
	cin >> N;
	cout << "Введите элементы матрицы: " << endl;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> element.m[i][j]; cout << "\t";
		}
		cout << endl;
	}
}

void Input_2()
{
	Matrix_2 element_2;
	int M_2, N_2;
	cout << "Введите размерность матрицы. " << endl << "Количество строк: ";
	cin >> M_2;
	cout << endl << "Количество столбцов: ";
	cin >> N_2;
	cout << "Введите элементы матрицы: " << endl;
	for (int i = 0; i < M_2; i++)
	{
		for (int j = 0; j < N_2; j++)
		{
			cin >> element_2.m_2[i][j]; cout << "\t";
		}
		cout << endl;
	}
}

void Addition()
{
	void Input_1();
	void Input_2();
	//to do
	cout << "Функция не реализована";
}
void Subtraction()
{
	void Input_1();
	void Input_2();
	//to do
	cout << "Функция не реализована";
}
void Multiplication()
{
	void Input_1();
	void Input_2();
	//to do
	cout << "Функция не реализована";
}
void Add_with_Num()
{
	void Input_1();
	//to do
	cout << "Функция не реализована";
}
void Transposition()
{
	void Input_1();
	//to do
	cout << "Функция не реализована";
}
void Inverse_M()
{
	void Input_1();
	//to do
	cout << "Функция не реализована";
}
void Determinant()
{
	void Input_1();
	//to do
	cout << "Функция не реализована";
}

void Output()
{
	//to do
	cout << "Результат: " << endl;
}