#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Matrix.h"
#include "Combinatorics.h"
#include "Polynomial.h"
#include "Functions.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int type_of_calculator;

	do
	{
		printf("Выберите вид калькулятора:\n1. - Матричый калькулятор\n2. - Калькулятор обыкновенных дробей\n3. - Калькулятор формул комбинаторики\n4. - Калькулятор многочленов\n5. - Теория вероятности и математическая статистика\n6. - Работа с функциями\n(Для выхода из программы введите 0)\n\n");

		do
		{
			printf("Ваш выбор: ");   scanf("%d", &type_of_calculator);
			if ((type_of_calculator < 0) || (type_of_calculator > 6)) printf("Ошибка! Проверьте входное значение.\n");
		} while ((type_of_calculator < 0) || (type_of_calculator > 6));

		printf("\n");

		switch (type_of_calculator)
		{
		case 1: Matrix(); break;
		case 2: break; // Гришина Анастасия
		case 3: Combinatorics(); break;
		case 4: Polynomical(); break;
		case 5: break; // Гришина Анастасия
		case 6: Functions(); break;
		default: break;
		}
	} while (type_of_calculator != 0);

	system("pause");

	return 1;
}