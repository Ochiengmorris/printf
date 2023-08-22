#include "main.h"
/**
 * printnumoct - print the number in octal begining with zero
 * @args: input string
 * @bf: buffer pointer
 * @buff: index for buffer pointer
 * Return: number of chars printed
 */
int printnumoct(va_list args, char *bf, unsigned int buff)
{
	int input, i, neg, count, digitone;
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
	buff = make_buff(bf, '0', buff);
	binary = malloc(sizeof(char) * (32 + 1));
	binary = bnry_array_fill(binary, input, neg, 32);
	octal = malloc(sizeof(char) * (11 + 1));
	octal = oct_array_fill(binary, octal);
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
	return (count + 1);
}
