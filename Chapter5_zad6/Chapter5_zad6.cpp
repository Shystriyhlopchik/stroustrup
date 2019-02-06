// Chapter5_zad6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "/Users/Shystrik/source/repos/Chapter_4/std_lib_facilities.h"

double ctok(double c) {
	if (c < -273.15)
		error("Температура ниже -273.15\n");
	else {
		double f = 9.0/5*c+32;
		return f;
	}
}

double ftok(double f) {
	if (f < -459.67)
		error("Температура ниже -273.15\n");
	else {
		double c = 5.0/9 * (f-32);
		return c;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	try {
		double c = 0.0;
		cout << "Введите температуру в градусах Цельсия->";
		cin >> c;

		double f = ctok(c);
		cout << "Температура в Фаренгейтах ->" << f << '\n';
		
		c = ftok(f);
		cout << "Температура в Цельсиях ->" << c <<'\n';
		keep_window_open();
		return 0;
	}
	catch (runtime_error) {
		cerr << "Ошибка! Температура ниже абсолютного нуля.\n";
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Error!";
		keep_window_open();
		return 2;
	}

}
