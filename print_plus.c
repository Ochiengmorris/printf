#include "main.h"
#include "stdio.h"

/**
 * pr_plus - print integer with plus symbol.
 *
 * @args: input string
 * @bf: buffer pointer
 * @buff: buffer pointer index.
 *
 * Return: number of chars printed out.
 */

int pr_plus(va_list args, char *bf, unsigned int buff)
{
	int input;
	unsigned int in, temp;
	unsigned int i, dv;

	input = va_arg(args, int);

	if (input < 0)
	{
		in = input * -1;
		buff = make_buff(bf, '-', buff);
	}
	else
	{
		in = input;
		buff = make_buff(bf, '+', buff);
	}
	temp = in;
	dv = 1;

	while (temp > 9)
	{
		dv = dv * 10;
		temp = temp / 10;
	}
	for (i = 0; dv > 0; dv = dv / 10, i++)
	{
		buff = make_buff(bf, ((in / dv) % 10) + '0', buff);
	}
	return (i + 1);
}

/************print_when_no_ident.*********************/

/**
 * print_pg - prints caharacter to stdout
 * @a: char input
 * @bf: buffer pointer
 * @j: index for buffer pointer
 * Return: On success 1.
 */

int print_pg(va_list a __attribute__((unused)), char *bf, unsigned int j)
{
	make_buff(bf, '%', j);

	return (1);
}
