#define _CRT_SECURE_NO_WARNINGS
#include "Functions.h"

void Functions()
{
	int type_of_function, action;

	printf("�������� ��������:\n1. - ���������� ������������ ��������� �� �������\n2. - ���������� ������� �������\n3. - ����� ����� y = 0 �� �������\n4. - ����� ����������� �� �������\n(��� �������� �� ������� ���� ������� 0)\n");

	do
	{
		printf("��� �����: ");   scanf("%d", &action);
		if ((action < 0) || (action > 4)) printf("������! ��������� ������� ��������.\n");
	} while ((action < 0) || (action > 4));

	if (action != 0)
	{
		printf("�������� ��� �������:\n1. - ������� ������� N\n2. - ���������\n3. - �������������\n4. - ���������������\n5. - ���������\n6. - �����������\n");

		do
		{
			printf("��� �����: ");   scanf("%d", &type_of_function);
			if ((type_of_function < 1) || (type_of_function > 6)) printf("������! ��������� ������� ��������.\n");
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

//������� ������� N
void Polynomial_of_degree(int action)
{
	; // to do
}

//��������� 
void Power_function(int action)
{
	; // to do
}

//�������������
void Exponential_function(int action)
{
	; // to do
}

//���������������
void Logarithmic_function(int action)
{
	; // to do
}

//���������
void Sinusoid(int action)
{
	; // to do
}

//�����������
void Cosine(int action)
{
	; // to do
}