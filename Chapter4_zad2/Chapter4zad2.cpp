// Chapter4zad2.cpp: РѕРїСЂРµРґРµР»СЏРµС‚ С‚РѕС‡РєСѓ РІС…РѕРґР° РґР»СЏ РєРѕРЅСЃРѕР»СЊРЅРѕРіРѕ РїСЂРёР»РѕР¶РµРЅРёСЏ.
//

#include "stdafx.h"
#include  "std_lib_facilities.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	vector <int> intVector;

	cout << "Введите целые числа в вектор: \n";
	for (int value; cin >> value;) 
		intVector.push_back(value);
		
	sort(intVector);
	cout << "Медианное значение: "
		<< intVector[intVector.size() / 2] << '\n';

	keep_window_open();
    return 0;
}

