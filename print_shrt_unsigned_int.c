#include "main.h"
/**
 * printshrtint - prints a short unsigned integer
 * @args: number to print
 * @bf: buffer pointer
 * @buff: index for buffer pointer
 * Return: number of chars printed.
 */
int printshrtint(va_list args, char *bf, unsigned int buff)
{
	unsigned short int n, temp, i, dv;

	n = va_arg(args, unsigned int);

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
	return (i);
}
