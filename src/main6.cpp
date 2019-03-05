#include "task6.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 7

int main()
{
	int arr[N];
	srand(time(0));
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 10 - 4;
		printf("%d\t", arr[i]);
	}
	printf("\nSum: %d\n", getSumMaxMin(arr, N));
	return 0;
}