// Chapter4_zad5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "std_lib_facilities.h"


int main()
try
{
	setlocale(LC_ALL, "Russian");
	cout << "Пожалуйста, введите два вещественных числа и операцию между ними\n Существующие операции + - * или / : ";
	double val1 = 0;
	double val2 = 0;
	char op = 0;
	while (cin >> val1 >> op >> val2) {	
		string oper;
		double result;
		switch (op) {
		case '+':
			oper = "Сумма ";
			result = val1 + val2;
			break;
		case '-':
			oper = "Разность ";
			result = val1 - val2;
			break;
		case '*':
			oper = "Произведение ";
			result = val1 * val2;
			break;
		case '/':
			oper ="Деление ";
			if (val2 == 0) error("деление на 0!");
			result = val1 / val2;
			break;
			//case '%':
			//	oper = " ";
			//	result = val1%val2; 
			//	break;
		default:
			error("Неизвестная операция.");
		}
		cout << oper << val1 << " и " << val2 << " равно " << result << '\n';
		cout << "Попробовать еще раз: ";
	}
}
catch (runtime_error e) {	
	cout << e.what() << '\n';
	keep_window_open("~");	
}
catch (...) {	
	cout << "exiting\n";
	keep_window_open("~");	
}