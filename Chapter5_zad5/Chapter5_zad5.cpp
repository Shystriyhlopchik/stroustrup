// Chapter5_zad5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "/Users/Shystrik/source/repos/Chapter_4/std_lib_facilities.h"

using namespace std;

double ctok(double k) {
	if (k < -273.15)
		error("Температура ниже -273.15\n");
	else {
		double c = k - 273.15;
		return c;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	try {
		double k = 0.0;
		cout << "Введите температуру в градусах Кельвина->";
		cin >> k;
		double c = ctok(k);
		cout << "Температура в Цельсиях ->" << c << '\n';
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
