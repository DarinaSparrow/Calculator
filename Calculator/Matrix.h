//Соленкова Анна
#pragma once

#define Nmax 100
#define Mmax 100
#include <iostream>
using namespace std;

struct Matrix_1
{
	int m[Nmax][Mmax];
};

struct Matrix_2
{
	int m_2[Nmax][Mmax];
};

void Matrix();
void Input_1();
void Input_2();
void Addition();
void Subtraction();
void Multiplication();
void Add_with_Num();
void Transposition();
void Inverse_M();
void Determinant();
void Output();