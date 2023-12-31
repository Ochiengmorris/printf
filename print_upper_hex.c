#include "main.h"
/**
 * printuphex - prints number in uppercase hex
 * @args: input string
 * @bf: buffer pointer
 * @buff: index for buffer pointer
 * Return: number of chars printed
 */
int printuphex(va_list args, char *bf, unsigned int buff)
{
	int input, i, neg, count, digitone;
	char *hexadecimal, *binary;

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
	buff = make_buff(bf, 'X', buff);
	binary = malloc(sizeof(char) * (32 + 1));
	binary = bnry_array_fill(binary, input, neg, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = hex_array(binary, hexadecimal, 1, 8);
	for (digitone = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && digitone == 0)
			digitone = 1;
		if (digitone)
		{
			buff = make_buff(bf, hexadecimal[i], buff);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
