#include "main.h"


/**
 * pr_sr - writes a string
 *
 * @args: input string
 * @bf: buffer pointer
 * @buff: index for buffer pointer
 *
 * Return: number of chars printed
 */


int pr_sr(va_list args, char *bf, unsigned int buff)
{
	unsigned char *string;
	char *hexadec, *binary;
	unsigned int i, sumn, op;

	string = va_arg(args, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadec = malloc(sizeof(char) * (8 + 1));
	for (sumn = i = 0; string[i]; i++)
	{
		if (string[i] < 32 || string[i] >= 127)
		{
			buff = make_buff(bf, '\\', buff);
			buff = make_buff(bf, 'x', buff);
			op = string[i];

			binary = bnry_array_fill(binary, op, 0, 32);
			hexadec = hex_array(binary, hexadec, 1, 8);
			buff = make_buff(bf, hexadec[6], buff);
			buff = make_buff(bf, hexadec[7], buff);
			sumn = sumn + 3;
		}
		else
			buff = make_buff(bf, string[i], buff);
	}
	free(binary);
	free(hexadec);
	return (i + sumn);
}
