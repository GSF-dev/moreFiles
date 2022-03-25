#include "functions.h"
#include <stdlib.h>
#include <time.h>

int sum(int n, int m) {
	return n + m;
}

void fillArr(int arr[], int length, int min, int max){
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (max - min) + min;
}




