#include "main.h"


/**
 * pr_lhx - prints a long decimal in hexadecimal
 * @args: input string
 * @bf: buffer pointer
 * @buff: index for buffer pointer.
 *
 * Return: number of chars printed
 */


int pr_lhx(va_list args, char *bf, unsigned int buff)
{
	long int input, i, neg, count, digitone;
	char *hexadec, *bnry;

	input = va_arg(args, long int);
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

	bnry = malloc(sizeof(char) * (64 + 1));
	bnry = bnry_array_fill(bnry, input, neg, 64);
	hexadec = malloc(sizeof(char) * (16 + 1));
	hexadec = hex_array(bnry, hexadec, 0, 16);
	for (digitone = i = count = 0; hexadec[i]; i++)
	{
		if (hexadec[i] != '0' && digitone == 0)
			digitone = 1;
		if (digitone)
		{
			buff = make_buff(bf, hexadec[i], buff);
			count++;
		}
	}
	free(bnry);
	free(hexadec);
	return (count);
}
