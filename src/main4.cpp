#include <stdio.h>
#include <string.h>
#include "task4.h"
#define N 256

int main(){
	char buf[N];
	printf("Write STR\n");
	fgets(buf, N, stdin);
	printf("Sum is :\t%d\n", getSum(buf));
	getchar(); getchar();
	return 0;
}