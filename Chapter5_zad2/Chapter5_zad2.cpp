// Chapter5_zad1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
	double c = 0.0;
	cin >> c;
	double k = ctok(c);
    cout << k << '\n';
	keep_window_open();
	return 0;
}
