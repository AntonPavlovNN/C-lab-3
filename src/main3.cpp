#include <stdio.h>
#include <string.h>
#include "task3.h"
#define N 256

int main()
{
	char buf[N];
	char word[N];
	printf("Write STR:\n");
	fgets(buf, N, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	printf("Longest str is:\n");
	printf("%s - %d\n", word, getMaxWord(buf, word));
	
	getchar(); getchar();
	return 0;

}
