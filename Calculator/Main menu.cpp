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
		printf("�������� ��� ������������:\n1. - �������� �����������\n2. - ����������� ������������ ������\n3. - ����������� ������ �������������\n4. - ����������� �����������\n5. - ������ ����������� � �������������� ����������\n6. - ������ � ���������\n(��� ������ �� ��������� ������� 0)\n\n");

		do
		{
			printf("��� �����: ");   scanf("%d", &type_of_calculator);
			if ((type_of_calculator < 0) || (type_of_calculator > 6)) printf("������! ��������� ������� ��������.\n");
		} while ((type_of_calculator < 0) || (type_of_calculator > 6));

		printf("\n");

		switch (type_of_calculator)
		{
		case 1: Matrix(); break;
		case 2: break; // ������� ���������
		case 3: Combinatorics(); break;
		case 4: Polynomical(); break;
		case 5: break; // ������� ���������
		case 6: Functions(); break;
		default: break;
		}
	} while (type_of_calculator != 0);

	system("pause");

	return 1;
}