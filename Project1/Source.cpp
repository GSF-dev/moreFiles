#include <iostream>
#include "functions.h"
#include "structures.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	/*int n, m;
	cout << "������� 2 �����: ";
	cin >> n >> m;
	cout << n << "+" << m << " = " << sum(n, m) << endl;

	int arr[10];
	fillArr(arr, 10, 40, 61);
	cout << "����������� ������\n";
	showArr(arr, 10);*/

	person Tom = { "tom Smith", {1,1,1990} };
	showObj(Tom.birthday);
	showObj(Tom);

	return 0;
}