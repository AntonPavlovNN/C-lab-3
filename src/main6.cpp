#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task6.h"

#define N 8

int main()
{
	int f, end;
	int arr[N] = { 0 };
	srand(time(0));
	for (f = 0; f < N; f++)
	{
		end = rand() % 2;
		if (end == 0)
			arr[f] = (rand() % 10)* (-1);
		else if (end == 1)
			arr[f] = rand() % 10;
		printf("%d ", arr[f]);
	}
	putchar('\n');
	printf("Sum = %d", getSumMaxMin(arr, N));
	return 0;
}