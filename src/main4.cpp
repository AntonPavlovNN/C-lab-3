#include <stdio.h>
#include <cstring>
#include "task4.h"
#define N 300

int main()
{
	char buf[N];
	printf("Enter a string:\n");
	fgets(buf, N, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	printf("Value: %d\n", getSum(buf));
	return 0;
}