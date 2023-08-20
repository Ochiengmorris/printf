#include "main.h"

/**
 * _printf - output and data conversion function
 * @format: where string is input
 *
 * Return: the number of characters that have been printed
 */

int _printf(const char *format, ...)
{
	unsigned int j = 0, leng = 0, buff = 0;
	int (*func)(va_list, char *, unsigned int);
	char *buffr;
	va_list args;

	va_start(args, format), buffr = malloc(sizeof(char) * 1024);
	if (!format[j])
		return (0);
	if (!format || !buffr || (format[j] == '%' && !format[j + 1]))
		return (-1);
	for (j = 0; format && format[j]; j++)
	{
		if (format[j] == '%')
		{
			if (format[j + 1] == '\0')
			{	pr_buff(buffr, buff), free(buffr), va_end(args);
				return (-1);
			}
			else
			{	func = pr_func(format, j + 1);
				if (func == NULL)
				{
					if (format[j + 1] == ' ' && !format[j + 2])
						return (-1);
					make_buff(buffr, format[j], buff), leng++, j--;
				}
				else
				{
					leng = leng + func(args, buffr, buff);
					j = j + pr_funcev(format, j + 1);
				}
			} j++;
		}
		else
			make_buff(buffr, format[j], buff), leng++;
		for (buff = leng; buff > 1024; buff = buff - 1024)
			;
	}
	pr_buff(buffr, buff), free(buffr), va_end(args);
	return (leng);
}
