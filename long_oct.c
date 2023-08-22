#include "main.h"


/**
 * pr_loct - prints long dec number octal.
 * @args: argument input number
 * @bf: buffer pointer
 * @buff: index for buffer pointer.
 *
 * Return: number of chars printed.
 */


int pr_loct(va_list args, char *bf, unsigned int buff)
{
	long int input, i, neg, count, digitone;
	char *octal, *bnry;

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
	octal = malloc(sizeof(char) * (22 + 1));
	octal = long_oct_array(bnry, octal);
	for (digitone = i = count = 0; octal[i]; i++)
	{
		if (octal[i] != '0' && digitone == 0)
			digitone = 1;
		if (digitone)
		{
			buff = make_buff(bf, octal[i], buff);
			count++;
		}
	}
	free(bnry);
	free(octal);
	return (count);
}
