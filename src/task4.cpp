//#include "pch.h"

int getSum(char buf[])
{
	int i = 0, value = 0, sum = 0;
	while (buf[i])
	{
		if (buf[i] >= '0' && buf[i] <= '9')
			value = value * 10 + (buf[i] - '0');
		else
		{
			sum += value;
			value = 0;
		}
		i++;
	}

	return sum;
}