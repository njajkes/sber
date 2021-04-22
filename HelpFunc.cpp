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

	//функция получает 3 числа на вход - год, месяц, день окончания вклада
	//функция возвращает число - количество месяцев до окончания вклада
	time_t now = time(0);
	tm* ltm = localtime(&now);
	//переменная tm_year хранит количество лет, начиная с 1900 года,
	//поэтому чтобы получить текущую дату, нужно прибавить к tm_year 1900
	int today_year = 1900 + ltm->tm_year;
	//ym_mon хранит количество месяцев, начиная с января,
	//поэтому чтобы получить текущий месяц, нужно прибавить 1
	int today_months = ltm->tm_mon + 1;
	//ym_mday хранит количество дней с начала месяца
	int today_days = ltm->tm_mday;
	/* Алгоритм:
	Исходя из даты окончания вклада вычисляется количество месяцев, начиная с 2020 года.
	Из этого числа вычитается количество месяцев (исходя из текущей даты), начиная с 2020 года.
	Если дней даты окончания вклада не меньше, чем дней текущей даты, то возвращается число как
	разность месяцев.
	В противном случае из-за недостатка одного дня вычитается 1 месяц и возвращается функцией
	*/
	/*if (days < today_days)
		return (12 * (years - 2020) + monts) - (12 * (today_year - 2020) + today_months) - 1;
	else
		return (12 * (years - 2020) + monts) - (12 * (today_year - 2020) + today_months);
}

double round(double chislo, const int skolko_znakov_posle_zapyatoi)
{
	// возвращает число с плавающей точкой, округленное по правилам математики
	// до заданной цифры после запятой (максимум - 3 цифры)

	// функция получает на вход 2 параметра - число типа double
	// и значение до какой цифры после запятой делать округление
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
	// функция возвращает количество дней до идентичного дня следующего месяца
	time_t now = time(0);
	tm* ltm = localtime(&now);

	int i_years = (to_months + ltm->tm_mon) / 12;
	int i_months = (to_months + ltm->tm_mon + 1) - 12 * i_years;
	if (!i_months)
		i_months = 12;
	//переменная tm_year хранит количество лет, начиная с 1900 года,
	//поэтому чтобы получить текущую дату, нужно прибавить к tm_year 1900
	int today_year = 1900 + ltm->tm_year + i_years;

	//ym_mon хранит количество месяцев, начиная с января,
	//поэтому чтобы получить текущий месяц, нужно прибавить 1
	int today_months = ltm->tm_mon + 1 + i_months;

	//ym_mday хранит количество дней с начала месяца
	int today_days = ltm->tm_mday;

	switch (i_months)
	{
	case (1): //январь
		return 31;

	case (2): //февраль (может быть високосность)
		//проверка на весокосность текущего года
		if (today_year % 4 == 0)
			return 29;
		return 28;

	case (3): //март
		return 31;

	case (4): //апрель
		return 30;

	case (5): //май
		return 31;

	case (6): //июнь 
		return 30;

	case (7): //июль
		return 31;

	case (8): //август
		return 31;

	case (9): //сентябрь
		return 30;

	case (10): //октябрь
		return 31;

	case (11): //ноябрь
		return 30;

	case (12): //декабрь
		return 31;
	}


	return 0;

}

int skolko_dney_do_god_mesyac_den(int year, int month, int day)
{
	// функция полчает на вход 3 параметра
	// год, месяц, день той даты
	// до которой функция будет считать число -
	// - сколько дней между текущим временем и заданной будущей датой
	// в случае ошибки или при вводе даты позади текущей вернет -1

	//создание объекта tm исходя из текущего времени
	time_t now = time(0);
	tm* ltm = localtime(&now);
	int today_year = 1900 + ltm->tm_year; //текущий год
	int today_months = ltm->tm_mon + 1; //текущий месяц
	int today_days = ltm->tm_mday; //текущий день
	int how_days = 0;


	// проверки на корректный ввод даты до которой идет счет
	// (дата не должна быть позади)
	if (year < today_year)
		return -1;
	if (year <= today_year && month < today_months)
		return -1;
	if (year <= today_year && month <= today_months && day < today_days)
		return -1;


	for (int i = 0; ; i++)
	{

		int i_years = 1900 + ltm->tm_year + i / 12;
		// в случае, когда пользователь задал дату текущего месяца, сразу возвращается разница
		//между заданным днем и текущим днем
		if (!(month - (today_months + i)) && year == today_year)
			return day - today_days;
		//базовый случай - когда настанет момент, что осталось вычислить последний месяц
		//функция высчитывает сколько дней осталось до текущей даты и отнимает
		//разницу между днями сегодняшним и заданным
		//пример: 15.04.2021 и 13.05.2021
		//функция высчитает сколько дней от 15 апреля до 15 мая и отнимет разницу
		//между днями (15 - 13 = 2), будет возвращено 30 - 2 = 28 дней
		if ((month - (today_months + (i - 12 * (i / 12))) == 1) && (i_years == year))
			return how_days + how_many_days_to_next_months(i) - (today_days - day);

		how_days += how_many_days_to_next_months(i);

	}

	return -1;

}*/