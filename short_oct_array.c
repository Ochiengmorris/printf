#include "main.h"

/**
 * short_oct_array - finds the short octal number
 *
 * @bnr: array where is stored the binary.
 * @octa: array where is stored the octal.
 * Return: array binary.
 */

char *short_oct_array(char *bnr, char *octa)
{
	int op, i, j, iocta, limits;

	octa[6] = '\0';
	for (i = 15, iocta = 5; i >= 0; i--, iocta--)
	{
		if (i > 0)
			limits = 4;
		else
			limits = 1;
		for (op = 0, j = 1; j <= limits; j *= 2, i--)
			op = ((bnr[i] - '0') * j) + op;
		i++;
		octa[iocta] = op + '0';
	}
	return (octa);
}
