#include "task1.h"
#include <stdio.h>

int wordCount(char buf[])
{
	int i, wordCount, flag;
	wordCount = 0;
	flag = 0;
	for (i = 0; buf[i] != '\0'; i++)
		if (buf[i] != ' ' && flag == 0) {
		wordCount += 1;
		flag = 1;
		}
		else
			if (buf[i] == ' ') flag = 0;
	return wordCount;
}