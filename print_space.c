#include "main.h"


/**
 * pr_space - prints space the int.
 *
 * @args: inputs string arguments.
 * @bf: buffer pointer
 * @buff: index for buffer pointer.
 *
 * Return: number of chars printed
 */
int pr_space(va_list args, char *bf, unsigned int buff)
{
	int input;
	unsigned int in, temp, i, dv;

	input = va_arg(args, int);

	if (input < 0)
	{
		in = input * -1;
		buff = make_buff(bf, '-', buff);
	}
	else
	{
		in = input;
		buff = make_buff(bf, ' ', buff);
	}
	temp = in;
	dv = 1;

	while (temp > 9)
	{
		dv *= 10;
		temp = temp / 10;
	}
	for (i = 0; dv > 0; dv /= 10, i++)
	{
		buff = make_buff(bf, ((in / dv) % 10) + '0', buff);
	}
	return (i + 1);
}
