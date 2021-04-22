#pragma once
#include "Sberform.h"
#include "Functions.h"

class dopolnitelniy_procent
{
	int array_of_data[5] = { 3,6,12,24,36 };
	int aod = 5;
	double array_of_percent[5] = { 3.9, 4.2, 4.4, 4.5, 4.5 };
public:
	double get_percent(int data)
	{
		int i = 0;
		for (i = 0; i < aod; i++)
			if (data < array_of_data[i])
				break;
		return array_of_percent[i - 1];
	}
};
class sohranyai
{

	int array_of_data[7] = { 1, 2, 3, 6, 12, 24, 36 };
	int aod = 7;
	int array_of_summ[3] = { 1000, 100'000, 400'000 };
	int aos = 3;
	double array_of_percent[3][7] = { {1.65, 1.95, 2.45, 2.95, 3.1, 2.95, 2.8}, {1.9, 2.2, 2.7, 3.2, 3.35, 3.2, 3.05}, {2.05, 2.35, 2.85, 3.35, 3.5, 3.35, 3.2} };
	double array_for_pensioner[7] = { 2.05, 2.35, 2.85, 3.35, 3.5, 3.35, 3.2 };
public:
	double get_percent(int data, double summ, int offline, int is_pensioner)
	{

		int sum = summ;
		int i = 0;


		if (!is_pensioner)
		{
			for (i = 0; i < aod; i++)

				if (data < array_of_data[i])
					break;

			int k = 0;
			for (k = 0; k < aos; k++)
				if (sum < array_of_summ[k])
					break;
			if (offline)
				return (array_of_percent[k - 1][i - 1] - 0.15);
			else
				return array_of_percent[k - 1][i - 1];
		}
		else
		{
			for (i = 0; i < aod; i++)
				if (data < array_of_data[i])
					break;
			if (offline)
				return (array_for_pensioner[i - 1] - 0.15);
			else
				return array_for_pensioner[i - 1];
		}

	}
};
class popolniay
{
	int array_of_data[5] = { 3, 6, 12, 24, 36 };
	int aod = 5;
	int array_of_summ[3] = { 1000, 100'000, 400'000 };
	int aos = 3;
	double array_of_percent[3][5] = { {2.2, 2.6, 2.65, 2.4, 2.15}, {2.45, 2.85, 2.9, 2.65, 2.4}, {2.6, 3.0, 3.05, 2.8, 2.55} };
	double array_for_pensioner[5] = { 2.6, 3.0, 3.05, 2.8, 2.55 };
public:
	double get_percent(int data, double summ, int offline, int is_pensioner)
	{

		int sum = summ;
		int i = 0;
		if (!is_pensioner)
		{
			for (i = 0; i < aod; i++)

				if (data < array_of_data[i])
					break;

			int k = 0;
			for (k = 0; k < aos; k++)
				if (sum < array_of_summ[k])
					break;

			if (offline)
				return (array_of_percent[k - 1][i - 1] - 0.15);
			else
				return array_of_percent[k - 1][i - 1];
		}
		else
		{
			for (i = 0; i < aod; i++)
				if (data < array_of_data[i])
					break;
			if (offline)
				return (array_for_pensioner[i - 1] - 0.15);
			else
				return array_for_pensioner[i - 1];

		}
	}
};
class upravliai
{
	int array_of_data[5] = { 3, 6, 12, 24, 36 };
	int aod = 5;
	int array_of_summ[3] = { 30'000, 100'000, 400'000 };
	int aos = 3;
	double array_of_percent[3][5] = { {1.85, 2.15, 2.1, 1.75, 1.4}, {2.1, 2.4, 2.35, 2.0, 1.65}, {2.25, 2.55, 2.5, 2.15, 1.8} };
public:
	double get_percent(int data, double summ, int offline)
	{

		int sum = summ;
		int i = 0;
		for (i = 0; i < aod; i++)

			if (data < array_of_data[i])
				break;

		int k = 0;
		for (k = 0; k < aos; k++)
			if (sum < array_of_summ[k])
				break;

		if (offline)
			return (array_of_percent[k - 1][i - 1] - 0.15);
		else
			return array_of_percent[k - 1][i - 1];
	}
};