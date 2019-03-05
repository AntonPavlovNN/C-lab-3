#include "task5.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 7

int main()
{
	int arr[SIZE];
	srand(time(0));
	printf("base array:\n");
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 - 4;
		printf("%d\t", arr[i]);
	}



	printf("\n %d\n", getSumInt(arr, SIZE));
	return 0;
}