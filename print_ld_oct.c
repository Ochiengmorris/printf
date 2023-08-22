#include "main.h"
/**
 * printldnum - prints long decimal number in octal
 * @args: input number
 * @bf: buffer pointer
 * @buff: index for buffer pointer
 * Return: number of chars printed.
 */
int printldnum(va_list args, char *bf, unsigned int buff)
{
	short int input, i, neg, count, digitone;
	char *octal, *binary;

	input = va_arg(args, int);
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

	binary = malloc(sizeof(char) * (16 + 1));
	binary = bnry_array_fill(binary, input, neg, 16);
	octal = malloc(sizeof(char) * (6 + 1));
	octal = short_oct_array(binary, octal);
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
	free(binary);
	free(octal);
	return (count);
}
