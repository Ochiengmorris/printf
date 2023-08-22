#include "main.h"

/**
 * print_rt - writes str in ROT13
 * @args: input string
 * @bf: buffer pointer
 * @buff: index for buffer pointer
 * Return: number of chars printed.
 */

int print_rt(va_list args, char *bf, unsigned int buff)
{
	char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int i, j, k;
	char nill[] = "(avyy)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			buff = make_buff(bf, nill[i], buff);
		return (6);
	}
	for (i = 0; str[i]; i++)
	{
		for (k = j = 0; alf[j]; j++)
		{
			if (str[i] == alf[j])
			{
				k = 1;
				buff = make_buff(bf, rot[j], buff);
				break;
			}
		}
		if (k == 0)
			buff = make_buff(bf, str[i], buff);
	}
	return (i);
}
