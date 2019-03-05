#include <stdio.h>
#include "task4.h"
#define sLMax 201 // max length of string

int main()
{
	char str[sLMax];
	printf("Enter the string (<%d): ", sLMax - 1);
	fgets(str, sLMax, stdin);
	int i = 0; // óáèðàåì '\n' (ìîæíî strlen)
	for (; str[i] != '\n'; i++);
	str[i] = '\0';
	printf(" summ of numbers in the string = %d ", getSum(str));
	putchar('\n');
	return 0;
}