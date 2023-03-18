//Ушенин Евгений
#pragma once
#include <iostream>
#include <windows.h>

using namespace std;

//многочлен
struct  Data
{
	double* FirstPolynom;
	int FirstPolynomMaxDegree;
	double* SecondPolynom;
	int SecondPolynomMaxDegree;
	double* EndPolynom;
	int EndPolynomMaxDegree;
};

//меню
void Polynomical();

//ввод многочлена
void PolynomInput(Data& Polynom);

//вывод многочлена
void PolynomOutput(Data& Polynom);

//сложение многочленов
void Addition(Data& Polynom);

//вычитание многочленов
void Subtraction(Data& Polynom);

//умножение многочленов
void Multiplication(Data& Polynom);

//деление многчленов
void Division(Data& Polynom);

//умножение на число
void NumberMultiplication(Data& Polynom);

//производная от многочлена
void Derivate(Data& Polynom);
