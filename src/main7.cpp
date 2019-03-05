#include <stdio.h>
#include <string.h>

#define N 256

int main()
{
	char line[N]; 
	int str[255] = { 0 };
	int count = 1; 
	puts("Enter a string please:");
	fgets(line, N, stdin);
	unsigned long length = strlen(line); 

	for (int i = 0; i < length - 1; i++)
		str[line[i]]++;

	for (int i = 0; i < 255; i++) 
	{
		if (str[i] >= count)
			count = str[i];
	}
	for (; count != 0; count--) 
	{ 
		for (int i = 0; i < 255; i++) 
		{ 
			if (str[i] == count)
				printf("%c - %d\n", i, count);
		}
	}
	return 0;
}