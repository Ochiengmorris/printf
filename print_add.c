#include "main.h"
#include <stdio.h>
/**
 * print_add - prints the address of an input var
 * @args: input address.
 * @bf: buffr pointer.
 * @buff: index for buffer pointer
 *
 * Return: number of chars printed.
 */
int print_add(va_list args, char *bf, unsigned int buff)
{
	void *add;
	long int input;
	int i, count, first_digit, isnegative;
	char *hexadecimal, *binary;
	char nill[] = "(nil)";

	add = (va_arg(args, void *));
	if (add == NULL)
	{
		for (i = 0; nill[i]; i++)
			buff = make_buff(bf, nill[i], buff);
		return (5);
	}
	input = (intptr_t)add;
	isnegative = 0;
	if (input < 0)
	{
		input = (input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (64 + 1));
	binary = bnry_array_fill(binary, input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = hex_array(binary, hexadecimal, 0, 16);
	buff = make_buff(bf, '0', buff);
	buff = make_buff(bf, 'x', buff);
	for (first_digit = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			buff = make_buff(bf, hexadecimal[i], buff);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
