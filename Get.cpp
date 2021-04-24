#include "Sberform.h"
#include "ClassStock.h"
#include <stdio.h>
#include <ctime>
#include <conio.h>
#include <windows.h> 
#include <io.h> 
#include <stdlib.h> 
#include <iostream>
#include <string.h>

double Get_Result(double summa, double stavka, int year_of_end, int month_of_end, int day_of_end, int is_kapitalisaion, double sum_plus, double sum_minus, double nesnijaemiy_porog);
int monts(const int years, const int monts, const int days);
int how_many_days_to_next_months(int to_months);
double round(double chislo, const int skolko_znakov_posle_zapyatoi);

double Switcher(double vklad_s, int Vklad_Type, int year, int month, int day, double vklad_p, double vklad_m, int pensioner, int capitalization, int offline, double Min_vklad)
{
	switch (Vklad_Type)
	{
	case 1:
	{
		dopolnitelniy_procent vklad;
		return Get_Result(vklad_s, vklad.get_percent(monts(year, month, day)), year, month, day, capitalization, vklad_p, vklad_m, Min_vklad);
	}
	case 2:
	{
		sohranyai vklad;
		return Get_Result(vklad_s, vklad.get_percent(monts(year, month, day), vklad_s, offline, pensioner), year, month, day, capitalization, vklad_p, vklad_m, Min_vklad);
	}
	case 3:
	{
		popolniay vklad;
		return Get_Result(vklad_s, vklad.get_percent(monts(year, month, day), vklad_s, offline, pensioner), year, month, day, capitalization, vklad_p, vklad_m, Min_vklad);
	}
	case 4:
	{
		upravliai vklad;
		return Get_Result(vklad_s, vklad.get_percent(monts(year, month, day), Min_vklad, offline), year, month, day, capitalization, vklad_p, vklad_m, Min_vklad);
	}
	}
}

double SwitcherIncome(double vklad_s, int Vklad_Type, int year, int month, int day, double vklad_p, double vklad_m, int pensioner, int capitalization, int offline, double Min_vklad)
{
	switch (Vklad_Type)
	{
	case 1:
	{
		dopolnitelniy_procent vklad;
		return round(Get_Result(vklad_s, vklad.get_percent(monts(year, month, day)), year, month, day, capitalization, vklad_p, vklad_m, Min_vklad) - vklad_s, 2);
	}
	case 2:
	{
		sohranyai vklad;
		return round(Get_Result(vklad_s, vklad.get_percent(monts(year, month, day), vklad_s, offline, pensioner), year, month, day, capitalization, vklad_p, vklad_m, Min_vklad) - vklad_s, 2);
	}
	case 3:
	{
		popolniay vklad;
		return round(Get_Result(vklad_s, vklad.get_percent(monts(year, month, day), vklad_s, offline, pensioner), year, month, day, capitalization, vklad_p, vklad_m, Min_vklad) - vklad_s - vklad_p*(monts(year, month, day)-1), 2);
	}
	case 4:
	{
		upravliai vklad;
		double delta = vklad_p - vklad_m;
		return round(Get_Result(vklad_s, vklad.get_percent(monts(year, month, day), Min_vklad, offline), year, month, day, capitalization, vklad_p, vklad_m, Min_vklad) - vklad_s - delta * (monts(year, month, day)-1), 2);
	}
	}
}

double GetPerc(double vklad_s, int Vklad_Type, int year, int month, int day, double vklad_p, double vklad_m, int pensioner, int capitalization, int offline, double Min_vklad)
{
	switch (Vklad_Type)
	{
	case 1:
	{
		dopolnitelniy_procent vklad;
		return round(vklad.get_percent(monts(year, month, day)), 3);
	}
	case 2:
	{
		sohranyai vklad;
		if (capitalization) {
			double i = monts(year, month, day) / 12.0;
			return round(SwitcherIncome(vklad_s, Vklad_Type, year, month, day, vklad_p, vklad_m, pensioner, capitalization, offline, Min_vklad) / vklad_s * 100 / i, 2);
		}
		return round(vklad.get_percent(monts(year, month, day), vklad_s, offline, pensioner), 3);
	}
	case 3:
	{
		popolniay vklad;
		if (capitalization) {
			double i = monts(year, month, day) / 12.0;
			return round(SwitcherIncome(vklad_s, Vklad_Type, year, month, day, 0, 0, pensioner, capitalization, offline, Min_vklad) / vklad_s * 100 / i, 2);
		}
		return round(vklad.get_percent(monts(year, month, day), vklad_s, offline, pensioner), 3);
	}
	case 4:
	{
		upravliai vklad;
		if (capitalization) {
			double i = monts(year, month, day) / 12.0;
			return round(SwitcherIncome(vklad_s, Vklad_Type, year, month, day, 0, 0, pensioner, capitalization, offline, Min_vklad) / vklad_s * 100 / i, 2);
		}
		return round(vklad.get_percent(monts(year, month, day), Min_vklad, offline), 3);
	}
	}
}

double Get_Result(double summa, double stavka, int year_of_end, int month_of_end, int day_of_end, int is_kapitalisaion, double sum_plus, double sum_minus, double nesnijaemiy_porog)
{
	/*

	�������� �������, ��������:
	1) �����, �������� ������������� �� �����
	2) ������, ������� �������������� � ������� get_percent(), ������� ��������� � ������ ���������������� ������
	3) ��� ��������� ������
	4) ����� ��������� ������
	5) ���� ��������� ������
	6) ���� �� ������������� (1 - ��, 0 - ���). �� ��������� 0
	7) ����������� ���� �� ����� �����. �� ��������� 0
	8) ����������� ������ ����� � ������. �� ��������� 0
	______________________________________________________
	������� �� ������ ���� ��������� ������ ���������� �������� �����, ������� ������� ������������ ��� ��������� ����� ������
	*/

	//�������� ���� ���������� � ��������� ������
	//��� ������ ������ ��� ������������� - ����������� �������� ����� 
	//����������� � "�������" - � a[0], �� ����� ������ ��� ����� �� a[0] ��������������
	//c ��������� ������
	//� �������� ������ �������� ����� ����������� ����� �� ��� �����
	double a[2] = { 0 };
	a[1] = summa;

	time_t now = time(0);
	tm* ltm = localtime(&now);

	//���� ��� ����������, ���������� = 1, � ������� �� 
	//���������� ����������� � ����� - � ���������� ���� ������� ���������� �� 36600, 
	//� �������� ������ - �� 36500
	int is_visokosniy = 0;
	for (int i = 0; i < monts(year_of_end, month_of_end, day_of_end); i++)
	{

		//����������, � ������� ������� ���������� ���������� ������� ���� 
		//��� �����
		int i_years = (i + ltm->tm_mon) / 12;
		int i_months = (i + ltm->tm_mon + 1) - 12 * i_years;
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


		//���� ��������� ��� - ����������, �� �������������� �����
		//����������� ��������� �� � ������� ���� �� 31 ������� 
		//� �� ������������� ������������ ��� ����� ��������
		//��� ��� � ���������� ���� ���������� ������� ������������ �������� �� 36600, � �� �� 36500
		if (i_months == 12 && (today_year + 1) % 4 == 0)
		{
			a[is_kapitalisaion] += (((a[1] * stavka * ((double)31.0 - (double)today_days)) / (36500.0)) + ((a[1] * stavka * (double)today_days) / ((double)36600.0)));
			is_visokosniy = 1;
			if (monts(year_of_end, month_of_end, day_of_end) - i != 1)
			{
				a[1] += sum_plus;
				a[1] -= sum_minus;
				summa += sum_plus;
				summa -= sum_minus;
				if (summa < nesnijaemiy_porog)
					return -1;
			}
			continue;
		}
		if (i_months == 12 && today_year % 4 == 0)
		{
			a[is_kapitalisaion] += (((a[1] * stavka * ((double)31.0 - (double)today_days)) / (36600.0)) + ((a[1] * stavka * (double)today_days) / ((double)36500.0)));
			is_visokosniy = 0;
			if (monts(year_of_end, month_of_end, day_of_end) - i != 1)
			{

				a[1] += sum_plus;
				a[1] -= sum_minus;
				summa += sum_plus;
				summa -= sum_minus;
				if (summa < nesnijaemiy_porog)
					return -1;
			}
			continue;
		}


		a[is_kapitalisaion] += (a[1] * stavka * (double)how_many_days_to_next_months(i) / (36500.0 + 100.0 * is_visokosniy));

		if (monts(year_of_end, month_of_end, day_of_end) - i != 1)
		{

			a[1] += sum_plus;
			a[1] -= sum_minus;
			summa += sum_plus;
			summa -= sum_minus;
			if (summa < nesnijaemiy_porog)
				return -1;
		}

	}
	//���������� � �����������
	a[0] = round(a[0], 2);
	a[1] = round(a[1], 2);
	a[1] += a[0];
	return a[1];

}

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
	if (days < today_days)
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
	long long int chislo_int = chislo * pow(10.0, skolko_znakov_posle_zapyatoi + 1);
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

}