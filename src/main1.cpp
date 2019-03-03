#include"task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 256
int main()
{
		char buf[N];

		printf("Enter a string: ");
		fgets(buf, N, stdin);

		printf("%d\n", wordCount(buf));
		return 0;
}