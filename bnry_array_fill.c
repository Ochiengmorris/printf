#include "main.h"

/**
 * bnry_array_fill - prints decimal in binary
 * @bnr: binary pointer.
 * @in: input numbers.
 *
 * @neg: if number is negative.
 * @limits: array size.
 *
 * Return: number of chars printed.
 */

char *bnry_array_fill(char *bnr, long int in, int neg, int limits)
{
	int j;

	for (j = 0; j < limits; j++)
		bnr[j] = '0';
	bnr[limits] = '\0';

	for (j = limits - 1; in > 1; j--)
	{
		if (in == 2)
			bnr[j] = '0';
		else
			bnr[j] = (in % 2) + '0';
		in = in / 2;
	}

	if (in != 0)
		bnr[j] = '1';

	if (neg)
	{
		for (j = 0; bnr[j]; j++)
			if (bnr[j] == '0')
				bnr[j] = '1';
			else
				bnr[j] = '0';
	}
	return (bnr);
}
