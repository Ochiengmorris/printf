#include "main.h"


/**
 * print_octa - prints decimal number in the octal to the std output
 * @args: puts arguments(numbers).
 * @bf: pointer to the buffer.
 * @buff: buffer pointer index.
 *
 * Return: number of chars printed.
 */

int print_octa(va_list args, char *bf, unsigned int buff)
{
	int i, input, neg, count, digitone;
	char *octa, *bnry;

	input = va_arg(args, int);
	neg = 0;

	if (input == 0)
	{
		buff = make_buff(bf, '0', buff);
		return (1);
	}
	if (input < 0)
	{
		input = (input * -1) - 1;
		neg = 1;
	}

	bnry = malloc(sizeof(char) * (32 + 1));
	bnry = bnry_array_fill(bnry, input, neg, 32);
	octa = malloc(sizeof(char) * (11 + 1));
	octa = oct_array_fill(bnry, octa);
	for (digitone = i = count = 0; octa[i]; i++)
	{
		if (octa[i] != '0' && digitone == 0)
			digitone = 1;
		if (digitone)
		{
			buff = make_buff(bf, octa[i], buff);
			count++;
		}
	}
	free(bnry);
	free(octa);
	return (count);
}
