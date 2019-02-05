// Chapter4_zad3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "std_lib_facilities.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	vector<double> distance;
	void theDistanceInput();
	double total(vector<double>);
	double leastDiatance(vector<double>);
	double greatestDistance(vector<double>);
	double middleDistance(vector<double>);

	cout << "Введите расстояния между городами: \n";
	for (double dist; cin >> dist;) {
		distance.push_back(dist);
	}
	cout << "Сумма введенных расстояний: " << total(distance) <<'\n';
	cout << "Наименьшее расстояние между городами: " << leastDiatance(distance) << '\n';
	cout << "Наибоьшее расстояние между городами: " << greatestDistance(distance) << '\n';
	cout << "Среднее расстояние между городами: " << middleDistance(distance) << '\n';

	keep_window_open();
	return 0;
}

double total(vector<double> sumVector) {
	double sumValue = 0.0;
	for (double value : sumVector)
		sumValue += value;
	return sumValue;
}
double leastDiatance(vector<double>Vector) {
	sort(Vector);
	return Vector[0];
}
double greatestDistance(vector<double>Vector) {
	sort(Vector);
	return Vector[Vector.size()-1];
}
double middleDistance(vector<double>Vector) {
	double sum = 0.0;
	for (double addSum : Vector) 
		sum += addSum;
	return sum / Vector.size();
}

