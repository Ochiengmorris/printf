#include "main.h"


/**
 * hex_array - writes the character c to stdout
 *
 * @bnr: array where is stored the binary.
 * @hx: array where is stored the hexadecimal.
 * @upp: integer that determines if the hexadecimal array is
 * in uppercase or lowercase letter.
 * @limits: size of hx.
 *
 * Return: binary array.
 */
char *hex_array(char *bnr, char *hx, int upp, int limits)
{
	int op, i, j, tol;

	hx[limits] = '\0';

	if (upp)
		tol = 55;
	else
		tol = 87;

	for (i = (limits * 4) - 1; i >= 0; i--)
	{
		for (op = 0, j = 1; j <= 8; j = j * 2, i--)
			op = ((bnr[i] - '0') * j) + op;
		i++;
		if (op < 10)
			hx[i / 4] = op + 48;
		else
			hx[i / 4] = op + tol;
	}
	return (hx);
}
