// Chapter4zad2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include  "std_lib_facilities.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	vector <int> intVector;

	cout << "������� ����� ����� � ������: \n";
	for (int value; cin >> value;) 
		intVector.push_back(value);
		
	sort(intVector);
	cout << "��������� ��������: "
		<< intVector[intVector.size() / 2] << '\n';

	keep_window_open();
    return 0;
}

