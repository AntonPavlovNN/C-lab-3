//#include "pch.h"
#include <stdio.h>
#define N 256

int main()
{
	char str[N];
	printf("Enter a string, and I will place the words from it in a column: \n");
	fgets(str, N, stdin);

	int i = 0;
	int chcounter = 0;
	int spacecounter;

	while (str[i])
	{
		if (str[i] != ' ')
		{
			putchar(str[i]);
			spacecounter = 0;
			chcounter++;
		}
		else
		{
			if (spacecounter == 0)
				printf("%2d \n", chcounter);
			chcounter = 0;
			spacecounter++;
		}
		i++;
	}
	printf("%2d \n", chcounter - 1);
	
	return 0;
}