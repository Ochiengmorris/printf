#include "main.h"

/**
 * print_brr - prints decimal in binary
 * @args: input string
 * @bf: buffer pointer
 * @buff: index for buffer pointer
 * Return: number of chars printed.
 */
int print_brr(va_list args, char *bf, unsigned int buff)
{
	int input, count, i, first_one, isnegative;
	char *binary;

	input = va_arg(args, int);
	isnegative = 0;
	if (input == 0)
	{
		buff = make_buff(bf, '0', buff);
		return (1);
	}
	if (input < 0)
	{
		input = (input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));
	binary = bnry_array_fill(binary, input, isnegative, 32);
	first_one = 0;
	for (count = i = 0; binary[i]; i++)
	{
		if (first_one == 0 && binary[i] == '1')
			first_one = 1;
		if (first_one == 1)
		{
			buff = make_buff(bf, binary[i], buff);
			count++;
		}
	}
	free(binary);
	return (count);
}
