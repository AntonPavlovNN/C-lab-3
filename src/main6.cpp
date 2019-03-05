#include <stdio.h>
#include "task6.h"
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
	int arr[N];
	srand(time(0));
	int number = 0;

	for (int i = 0; i < N; i++)  //filling the array with random numbers
	{
		number = (rand() % 11)* (rand() % 2 ? 1 : -1);
		arr[i] = number;
	}

	for (int i = 0; i < N; i++) //print the array
		printf("%d ", arr[i]);
	putchar('\n');

	printf("Summa: %d\n", getSumMaxMin(arr, N));

	return 0;
}