#include "Polynomial.h"

//меню
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

//ввод многочлена
void PolynomInput(Data& Polynom)
{
	cout << "Ввод многочлена";
}

//вывод многочлена
void PolynomOutput(Data& Polynom)
{
	cout << "Вывод многочлена";
}

//сложение многочленов
void Addition(Data& Polynom)
{
	PolynomInput(Polynom);
	PolynomOutput(Polynom);
	cout << "Результат сложения двух многочленов";
	//to do
}

//вычитание многочленов
void Subtraction(Data& Polynom)
{
	PolynomInput(Polynom);
	PolynomOutput(Polynom);
	cout << "Результат вычитания двух многочленов";
	//to do
}

//умножение многочленов
void Multiplication(Data& Polynom)
{
	PolynomInput(Polynom);
	PolynomOutput(Polynom);
	cout << "Результат умножения двух многочленов";
	//to do
}

//деление многчленов
void Division(Data& Polynom)
{
	PolynomInput(Polynom);
	PolynomOutput(Polynom);
	cout << "Результат деления двух многочленов";
	//to do
}

//умножение на число
void NumberMultiplication(Data& Polynom)
{
	PolynomInput(Polynom);
	PolynomOutput(Polynom);
	cout << "Результат умножения многочлена на число";
	//to do
}

//производная от многочлена
void Derivate(Data& Polynom)
{
	PolynomInput(Polynom);
	PolynomOutput(Polynom);
	cout << "Вычисление производной от многочлена";
	//to do
}