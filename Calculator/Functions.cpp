#define _CRT_SECURE_NO_WARNINGS
#include "Functions.h"

void Functions()
{
	int type_of_function, action;

	printf("Выберите действие:\n1. - Вычисление определённого интеграла на отрезке\n2. - Построение графика функции\n3. - Поиск корня y = 0 на отрезке\n4. - Поиск экстремумов на отрезке\n(Для перехода на главное меню введите 0)\n");

	do
	{
		printf("Ваш выбор: ");   scanf("%d", &action);
		if ((action < 0) || (action > 4)) printf("Ошибка! Проверьте входное значение.\n");
	} while ((action < 0) || (action > 4));

	if (action != 0)
	{
		printf("Выберите вид функции:\n1. - Полином степени N\n2. - Степенная\n3. - Показательная\n4. - Логарифмическая\n5. - Синусоида\n6. - Косинусоида\n");

		do
		{
			printf("Ваш выбор: ");   scanf("%d", &type_of_function);
			if ((type_of_function < 1) || (type_of_function > 6)) printf("Ошибка! Проверьте входное значение.\n");
		} while ((type_of_function < 1) || (type_of_function > 6));

		switch (type_of_function)
		{
		case 1: Polynomial_of_degree(action);
		case 2: Power_function(action);
		case 3: Exponential_function(action);
		case 4: Logarithmic_function(action);
		case 5: Sinusoid(action);
		case 6: Cosine(action);
		}
	}
}

//Полином степени N
void Polynomial_of_degree(int action)
{
	; // to do
}

//Степенная 
void Power_function(int action)
{
	; // to do
}

//Показательная
void Exponential_function(int action)
{
	; // to do
}

//Логарифмическая
void Logarithmic_function(int action)
{
	; // to do
}

//Синусоида
void Sinusoid(int action)
{
	; // to do
}

//Косинусоида
void Cosine(int action)
{
	; // to do
}