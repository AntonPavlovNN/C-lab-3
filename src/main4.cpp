#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 200

int main()
{
	char buf[SIZE] = { 0 };
	printf("Enter a string:\n");
	fgets(buf, SIZE, stdin);
	printf("\nThe sum: %d\n", getSum(buf));
	return 0;
}