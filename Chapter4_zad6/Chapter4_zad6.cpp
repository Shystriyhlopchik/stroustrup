// Chapter4_zad6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "std_lib_facilities.h"

static vector <string> string_value
= { "zero","one","two","three","four","five","six","seven","eight","nine" };

int main()
{
	setlocale(LC_ALL, "Russian");
	string IntegerToString(int);
	int StringToInteger(string);
	
	for (;;) {
		int iValue;
		cout << "Введите число от 0 до 9: "; cin >> iValue;
		cout << "Введенное число: " << IntegerToString(iValue) << '\n';

		string sValue;
		cout << "Введите число от 0 до 9 символами: "; cin >> sValue;
		cout << "Введенное число: " << StringToInteger(sValue) << '\n';
		break;
	}
	return 0;
}

string IntegerToString(int index) {
	return string_value[index];
}
int StringToInteger(string number) {
	for (int i = 0; i < string_value.size(); i++){
		if (number == string_value[i])
			return i;
	} 
	return -1;
}