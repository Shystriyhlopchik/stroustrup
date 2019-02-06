\// Chapter5_zad4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "/Users/Shystrik/source/repos/Chapter_4/std_lib_facilities.h"

using namespace std;

double ctok(double c) {
	if (c < 0.0)
		error("Температура ниже -273.15\n");
	else {
		double k = c + 273.15;
		return k;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double c = 0.0;
	cin >> c;
	try {
		double k = ctok(c);
		cout << k << '\n';
		keep_window_open();
		return 0;
	}
	catch (runtime_error) {
		cerr << "Ошибка! Температура ниже абсолютного нуля.\n";
		keep_window_open();
		return 1;
	}
	 
	
}