#include "Polynomial.h"

//����
void Polynomical()
{
	int menu;
	Data Polynom;

	cout << "menu = ";
	cin >> menu;

	switch (menu)
	{
	case 1: Addition(Polynom); break;
	case 2: Subtraction(Polynom); break;
	case 3: Multiplication(Polynom); break;
	case 4: Division(Polynom); break;
	case 5: NumberMultiplication(Polynom); break;
	case 6: Derivate(Polynom); break;
	}
}

//���� ����������
void PolynomInput(Data& Polynom)
{
	cout << "���� ����������";
}

//����� ����������
void PolynomOutput(Data& Polynom)
{
	cout << "����� ����������";
}

//�������� �����������
void Addition(Data& Polynom)
{
	PolynomInput(Polynom);
	PolynomOutput(Polynom);
	cout << "��������� �������� ���� �����������";
	//to do
}

//��������� �����������
void Subtraction(Data& Polynom)
{
	PolynomInput(Polynom);
	PolynomOutput(Polynom);
	cout << "��������� ��������� ���� �����������";
	//to do
}

//��������� �����������
void Multiplication(Data& Polynom)
{
	PolynomInput(Polynom);
	PolynomOutput(Polynom);
	cout << "��������� ��������� ���� �����������";
	//to do
}

//������� ����������
void Division(Data& Polynom)
{
	PolynomInput(Polynom);
	PolynomOutput(Polynom);
	cout << "��������� ������� ���� �����������";
	//to do
}

//��������� �� �����
void NumberMultiplication(Data& Polynom)
{
	PolynomInput(Polynom);
	PolynomOutput(Polynom);
	cout << "��������� ��������� ���������� �� �����";
	//to do
}

//����������� �� ����������
void Derivate(Data& Polynom)
{
	PolynomInput(Polynom);
	PolynomOutput(Polynom);
	cout << "���������� ����������� �� ����������";
	//to do
}