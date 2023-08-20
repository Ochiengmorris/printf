#include "main.h"

/**
 * print_int - prints integer (signed)
 *
 * @args: argument ofcourse.
 * @bf: pointer (1 byte size)
 * @buff: int...
 * Return: no of bytes printed
 */

int print_int(va_list args, char *bf, unsigned int buff)
{
	int input;
	unsigned int n, temp, i, dv, neg;

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
