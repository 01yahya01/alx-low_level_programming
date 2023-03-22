#include "main.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * positive_or_negative -entry point
 * @i: integer
 * Return: always (0) success
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else 
		printf("%d is zero\n", i);
	printf("\n");
}
