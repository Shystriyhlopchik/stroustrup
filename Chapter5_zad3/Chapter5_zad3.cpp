﻿// Chapter5_zad3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "/Users/Shystrik/source/repos/Chapter_4/std_lib_facilities.h"

using namespace std;

double ctok(double c) {
	double k = c + 273.15;
	return k;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double c = 0.0;

	cin >> c;
	double k = ctok(c);
	if (ctok(c) < 273.15) {
		cerr << "Температура ниже -273.15\n";
	}
	else 
		cout << k << '\n';
	keep_window_open();
	return 0;
}
