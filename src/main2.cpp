#include <stdio.h>
#include <string.h>
#define SIZE 256

int main()
{
	char buf[SIZE] = { 0 };
	char word[SIZE] = { 0 };
	int i = 0, j = 0;
	int charCount = 0;
	int flag = 0;
	int wordCount = 0;


	printf("Enter a string\n");
	fgets(buf, SIZE, stdin);

	/* удалить символ новой строки, если он есть */
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';


	for (; buf[i] != '\0'; i++)
	{
		if (buf[i] != ' ' && flag == 0) 
		{
			flag = 1;
			wordCount++;
			for (j = 0, charCount = 0; buf[i] != ' ' && buf[i] != '\0'; j++, i++) 
			{
				word[j] = buf[i];
				charCount++;
			}
			i--;
			word[j] = '\0';
			printf("%s\t%d\n", word, charCount);

		}
		else if (buf[i] == ' ' && flag == 1)
			flag = 0;
	}


	printf("Count of worlds: %d\n", wordCount);

	return 0;
}