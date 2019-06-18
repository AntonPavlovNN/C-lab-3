//#include "pch.h"

int getSumInt(int arr[], int N)
{
	int i = 0, j = N - 1, neg = 0, pos = 0, sum = 0;

	while (arr[i] > 0)
	{
		i++;
	}
	neg = i;

	while (arr[j] < 0)
	{
		j--;
	}
	pos = j;

	for (i = neg + 1; i < pos; i++)
		sum += arr[i];

	return sum;
}