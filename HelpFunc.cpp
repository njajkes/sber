/*#include "Sberform.h"
#include "ClassStock.h"
#include <stdio.h>
#include <ctime>
#include <conio.h>
#include <windows.h> 
#include <io.h> 
#include <stdlib.h> 
#include <iostream>
#include <string.h>

int monts(const int years, const int monts, const int days)

{

	//������� �������� 3 ����� �� ���� - ���, �����, ���� ��������� ������
	//������� ���������� ����� - ���������� ������� �� ��������� ������
	time_t now = time(0);
	tm* ltm = localtime(&now);
	//���������� tm_year ������ ���������� ���, ������� � 1900 ����,
	//������� ����� �������� ������� ����, ����� ��������� � tm_year 1900
	int today_year = 1900 + ltm->tm_year;
	//ym_mon ������ ���������� �������, ������� � ������,
	//������� ����� �������� ������� �����, ����� ��������� 1
	int today_months = ltm->tm_mon + 1;
	//ym_mday ������ ���������� ���� � ������ ������
	int today_days = ltm->tm_mday;
	/* ��������:
	������ �� ���� ��������� ������ ����������� ���������� �������, ������� � 2020 ����.
	�� ����� ����� ���������� ���������� ������� (������ �� ������� ����), ������� � 2020 ����.
	���� ���� ���� ��������� ������ �� ������, ��� ���� ������� ����, �� ������������ ����� ���
	�������� �������.
	� ��������� ������ ��-�� ���������� ������ ��� ���������� 1 ����� � ������������ ��������
	*/
	/*if (days < today_days)
		return (12 * (years - 2020) + monts) - (12 * (today_year - 2020) + today_months) - 1;
	else
		return (12 * (years - 2020) + monts) - (12 * (today_year - 2020) + today_months);
}

double round(double chislo, const int skolko_znakov_posle_zapyatoi)
{
	// ���������� ����� � ��������� ������, ����������� �� �������� ����������
	// �� �������� ����� ����� ������� (�������� - 3 �����)

	// ������� �������� �� ���� 2 ��������� - ����� ���� double
	// � �������� �� ����� ����� ����� ������� ������ ����������
	int chislo_int = chislo * pow(10, skolko_znakov_posle_zapyatoi + 1);
	if (chislo_int % 10 >= 5)
		chislo_int += 10 - chislo_int % 10;
	else
		chislo_int -= chislo_int % 10;
	chislo_int /= 10;
	chislo = chislo_int;
	return chislo / pow(10, skolko_znakov_posle_zapyatoi);
}


int how_many_days_to_next_months(int to_months)
{
	// ������� ���������� ���������� ���� �� ����������� ��� ���������� ������
	time_t now = time(0);
	tm* ltm = localtime(&now);

	int i_years = (to_months + ltm->tm_mon) / 12;
	int i_months = (to_months + ltm->tm_mon + 1) - 12 * i_years;
	if (!i_months)
		i_months = 12;
	//���������� tm_year ������ ���������� ���, ������� � 1900 ����,
	//������� ����� �������� ������� ����, ����� ��������� � tm_year 1900
	int today_year = 1900 + ltm->tm_year + i_years;

	//ym_mon ������ ���������� �������, ������� � ������,
	//������� ����� �������� ������� �����, ����� ��������� 1
	int today_months = ltm->tm_mon + 1 + i_months;

	//ym_mday ������ ���������� ���� � ������ ������
	int today_days = ltm->tm_mday;

	switch (i_months)
	{
	case (1): //������
		return 31;

	case (2): //������� (����� ���� ������������)
		//�������� �� ������������ �������� ����
		if (today_year % 4 == 0)
			return 29;
		return 28;

	case (3): //����
		return 31;

	case (4): //������
		return 30;

	case (5): //���
		return 31;

	case (6): //���� 
		return 30;

	case (7): //����
		return 31;

	case (8): //������
		return 31;

	case (9): //��������
		return 30;

	case (10): //�������
		return 31;

	case (11): //������
		return 30;

	case (12): //�������
		return 31;
	}


	return 0;

}

int skolko_dney_do_god_mesyac_den(int year, int month, int day)
{
	// ������� ������� �� ���� 3 ���������
	// ���, �����, ���� ��� ����
	// �� ������� ������� ����� ������� ����� -
	// - ������� ���� ����� ������� �������� � �������� ������� �����
	// � ������ ������ ��� ��� ����� ���� ������ ������� ������ -1

	//�������� ������� tm ������ �� �������� �������
	time_t now = time(0);
	tm* ltm = localtime(&now);
	int today_year = 1900 + ltm->tm_year; //������� ���
	int today_months = ltm->tm_mon + 1; //������� �����
	int today_days = ltm->tm_mday; //������� ����
	int how_days = 0;


	// �������� �� ���������� ���� ���� �� ������� ���� ����
	// (���� �� ������ ���� ������)
	if (year < today_year)
		return -1;
	if (year <= today_year && month < today_months)
		return -1;
	if (year <= today_year && month <= today_months && day < today_days)
		return -1;


	for (int i = 0; ; i++)
	{

		int i_years = 1900 + ltm->tm_year + i / 12;
		// � ������, ����� ������������ ����� ���� �������� ������, ����� ������������ �������
		//����� �������� ���� � ������� ����
		if (!(month - (today_months + i)) && year == today_year)
			return day - today_days;
		//������� ������ - ����� �������� ������, ��� �������� ��������� ��������� �����
		//������� ����������� ������� ���� �������� �� ������� ���� � ��������
		//������� ����� ����� ����������� � ��������
		//������: 15.04.2021 � 13.05.2021
		//������� ��������� ������� ���� �� 15 ������ �� 15 ��� � ������� �������
		//����� ����� (15 - 13 = 2), ����� ���������� 30 - 2 = 28 ����
		if ((month - (today_months + (i - 12 * (i / 12))) == 1) && (i_years == year))
			return how_days + how_many_days_to_next_months(i) - (today_days - day);

		how_days += how_many_days_to_next_months(i);

	}

	return -1;

}*/