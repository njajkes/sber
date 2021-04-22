#include "Sberform.h"
#pragma once
#pragma warning(push)
#pragma warning(disable:6385)
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Sberform.h"
double Switcher(double vklad, int Vklad_Type, int year, int month, int day, double vklad_p, double vklad_m, int pensioner, int capitalization, int online, double Min_Vklad);
double Get_Result(double summa, double stavka, int year_of_end, int month_of_end, int day_of_end, int is_kapitalisaion , double sum_plus , double sum_minus , double nesnijaemiy_porog);
double SwitcherIncome(double vklad_s, int Vklad_Type, int year, int month, int day, double vklad_p, double vklad_m, int pensioner, int capitalization, int offline, double Min_vklad);
double GetPerc(double vklad_s, int Vklad_Type, int year, int month, int day, double vklad_p, double vklad_m, int pensioner, int capitalization, int offline, double Min_vklad);