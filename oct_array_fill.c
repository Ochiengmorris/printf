#include "main.h"

/**
 * oct_array_fill - prints the character to stdout
 *
 * @bnr: array where is stored the binary.
 * @octa: array where is stored the octal.
 *
 * Return: array[binary].
 */
char *oct_array_fill(char *bnr, char *octa)
{
	int op, i, j, iocta, limits;

	octa[11] = '\0';
	for (i = 31, iocta = 10; i >= 0; i--, iocta--)
	{
		if (i > 1)
			limits = 4;
		else
			limits = 2;
		for (op = 0, j = 1; j <= limits; j = j * 2, i--)
			op = ((bnr[i] - '0') * j) + op;
		i++;
		octa[iocta] = op + '0';
	}
	return (octa);
}
