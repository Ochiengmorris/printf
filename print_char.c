#include "main.h"


/**
 * print_char - outputs a character to the console.
 * @args: says for itself. :)
 * @buff: character pointer
 * @bf: ...
 *
 * Return: number of printed chracters
 */


int print_char(va_list args, char *bf, unsigned int buff)
{
	char c;

	c = va_arg(args, int);

	make_buff(bf, c, buff);

	return (1);
}

/**
 * print_str - writes the string to the console.
 * @args: args input.
 * @bf: buffer pointer
 * @buff: buffer pointer index.
 * Return: On success 1.
 */

int print_str(va_list args, char *bf, unsigned int buff)
{
	char *str;
	unsigned int j;
	char nill[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (j = 0; nill[j]; j++)
			buff = make_buff(bf, nill[j], buff);
		return (6);
	}
	for (j = 0; str[j]; j++)
		buff = make_buff(bf, str[j], buff);
	return (j);
}
