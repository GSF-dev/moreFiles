#pragma once
#include <iostream>

int sum(int n, int m);

void fillArr(int arr[], int length, int min, int max);

template<typename T>
void showArr(T arr[], int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}