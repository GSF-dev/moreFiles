#include <iostream>
#include "functions.h"
#include "structures.h"
#include "data.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	/*int n, m;
	cout << "¬ведите 2 числа: ";
	cin >> n >> m;
	cout << n << "+" << m << " = " << sum(n, m) << endl;

	int arr[10];
	fillArr(arr, 10, 40, 61);
	cout << "»значальный массив\n";
	showArr(arr, 10);

	person Tom = { "tom Smith", {1,1,1990} };
	showObj(Tom.birthday);
	showObj(Tom);*/

	//data.h
	cout << "¬ведите 2 числа: ";
	cin >> _X >> _Y;
	showXY();
	cout << _X << " + " << _Y << " = " << sum(_X, _Y) << endl;

	cout << "¬ведите радиус окружности: ";
	int r;
	cin >> r;
	cout << "ѕлощадь окружности = " << _PI * r * r << endl;
	cout << "»значальный массив\n";
	fillArr(_A, 10, 10, 21);
	showArr(_A, 10);

	return 0;
}