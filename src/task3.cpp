#include "task3.h"

int getMaxWord(char buf[], char word[])
{
	int inWord = 0;
	int count = 0;
	int charCount = 0, maxWord = 0;
	int i,j = 0;

	for (; buf[i] != '\0'; i++)
	{
		if (buf[i] != ' ' && inWord == 0) 
		{
			inWord = 1;

			for (charCount = 0; buf[i] != ' ' && buf[i] != '\0'; i++) 
				charCount++;

			if (maxWord <= charCount)  
			{
				for (j = 0, i = i - charCount; buf[i] != ' ' && buf[i] != '\0'; i++, j++)
					word[j] = buf[i];
				i--;
				word[j] = '\0';
				maxWord = charCount;
			}
		}
		else if (buf[i] == ' ' && inWord == 1)
			inWord = 0;
	}
	return maxWord;
}