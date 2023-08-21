#include "main.h"

/**
 * print_revers - prints a string in reverse.
 * @args: gives the string arguments.
 * @bf: pointer to a buffer.
 * @buff: no index for the bf pointer.
 * Return: total no of chra printed.
 */
int print_revers(va_list args, char *bf, unsigned int buff)
{
	int k = 0;
	unsigned int j;
	char *string;
	char reverse[] = "(esrever)";

	string = va_arg(args, char *);
	if (string == NULL)
	{
		for (i = 0; reverse[j]; j++)
			buff = make_buff(bf, reverse[j], buff);
		return (6);
	}
	for (j = 0; string[j]; j++)
		;
	k = j - 1;

	for (; k >= 0; k--)
	{
		buff = make_buff(bf, string[k], buff);
	}
	return (j);
}
