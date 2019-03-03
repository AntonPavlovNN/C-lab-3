#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task6.h"
#define N 10

int main(){
	int arr[N];
	srand(time(0));
	printf("Your array:\t");
	for (int i = 0; i < N; i++){
		arr[i] = rand() % (20) - 10;
		printf("%d ", arr[i]);
	}
	printf("->%d\n", getSumMaxMin(arr, N));
	getchar(); getchar();
	return 0;
}