#include <stdio.h>
#include <string.h>
#include "task1.h"

#define N 256

int main()
{
	char buf[N];

	printf("Enter your string: \n");
	fgets(buf, N, stdin);
	int count = wordCount(buf);
	printf("You have %d words in your string!\n", count);
	return 0;
}