#include <stdio.h>
#include <cstring>

int getSum(char buf[])
{
	int k = 0;
	int value = 0;
	int sum = 0;

	while (buf[k])
	{
		if (buf[k] >= '0' && buf[k] <= '9')
			value = value * 10 + (buf[k] - '0');

		else (sum = sum + value, value = 0);
		k++;
	}
	sum = sum + value;
	return sum;
}