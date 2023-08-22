#include "main.h"
/**
 * printshtint - prints a short integer
 * @args: input string
 * @bf: buffer pointer
 * @buff: index for buffer pointer
 * Return: number of chars printed.
 */
int printshtint(va_list args, char *bf, unsigned int buff)
{
	short int input;
	unsigned short int n, temp, i, dv, neg;

	input = va_arg(args, int);
	neg = 0;
	if (input < 0)
	{
		n = input * -1;
		buff = make_buff(bf, '-', buff);
		neg = 1;
	}
	else
	{
		n = input;
	}
	temp = n;
	dv = 1;
	while (temp > 9)
	{
		dv *= 10;
		temp /= 10;
	}
	for (i = 0; dv > 0; dv /= 10, i++)
	{
		buff = make_buff(bf, ((n / dv) % 10) + '0', buff);
	}
	return (i + neg);
}
