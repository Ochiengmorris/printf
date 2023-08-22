#include "main.h"
/**
 * print_strv - prints a string and values of
 * non-printed chars
 * @args: input string
 * @bf: buffer pointer
 * @buff: index for buffer pointer
 * Return: number of chars printed
 */
int print_strv(va_list args, char *bf, unsigned int buff)
{
	unsigned char *str;
	char *hexadecimal, *binary;
	unsigned int i, sum, op;

	str = va_arg(args, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (sum = i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			buff = make_buff(bf, '\\', buff);
			buff = make_buff(bf, 'x', buff);
			op = str[i];
			binary = bnry_array_fill(binary, op, 0, 32);
			hexadecimal = hex_array(binary, hexadecimal, 1, 8);
			buff = make_buff(bf, hexadecimal[6], buff);
			buff = make_buff(bf, hexadecimal[7], buff);
			sum += 3;
		}
		else
			buff = make_buff(bf, str[i], buff);
	}
	free(binary);
	free(hexadecimal);
	return (i + sum);
}
