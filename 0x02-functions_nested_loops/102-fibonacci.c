#include <stdio.h>

/**
 * main - entry point
 * Return: alawys 0
 */

int main(void)
{
	int i;
	long j = 0, k = 1, sum;
	
	for (i = 0 ; i < 50 ; i++)
	{
		sum = j + k;
		printf("%lu", sum);
		j = k;
		k = sum;
		if (i == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
