#include "task1.h"
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 256


int main()
{

	char buf[SIZE];
	printf("Enter your text:\n");
	fgets(buf, SIZE, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	printf("%d\n", wordCount(buf));


	return 0;
}