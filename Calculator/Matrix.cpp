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
	cout << "������� ����������� �������. " << endl << "���������� �����: ";
	cin >> M;
	cout << endl << "���������� ��������: ";
	cin >> N;
	cout << "������� �������� �������: " << endl;
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
	cout << "������� ����������� �������. " << endl << "���������� �����: ";
	cin >> M_2;
	cout << endl << "���������� ��������: ";
	cin >> N_2;
	cout << "������� �������� �������: " << endl;
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
	cout << "������� �� �����������";
}
void Subtraction()
{
	void Input_1();
	void Input_2();
	//to do
	cout << "������� �� �����������";
}
void Multiplication()
{
	void Input_1();
	void Input_2();
	//to do
	cout << "������� �� �����������";
}
void Add_with_Num()
{
	void Input_1();
	//to do
	cout << "������� �� �����������";
}
void Transposition()
{
	void Input_1();
	//to do
	cout << "������� �� �����������";
}
void Inverse_M()
{
	void Input_1();
	//to do
	cout << "������� �� �����������";
}
void Determinant()
{
	void Input_1();
	//to do
	cout << "������� �� �����������";
}

void Output()
{
	//to do
	cout << "���������: " << endl;
}