//������ �������
#pragma once
#include <iostream>
#include <windows.h>

using namespace std;

//���������
struct  Data
{
	double* FirstPolynom;
	int FirstPolynomMaxDegree;
	double* SecondPolynom;
	int SecondPolynomMaxDegree;
	double* EndPolynom;
	int EndPolynomMaxDegree;
};

//����
void Polynomical();

//���� ����������
void PolynomInput(Data& Polynom);

//����� ����������
void PolynomOutput(Data& Polynom);

//�������� �����������
void Addition(Data& Polynom);

//��������� �����������
void Subtraction(Data& Polynom);

//��������� �����������
void Multiplication(Data& Polynom);

//������� ����������
void Division(Data& Polynom);

//��������� �� �����
void NumberMultiplication(Data& Polynom);

//����������� �� ����������
void Derivate(Data& Polynom);
