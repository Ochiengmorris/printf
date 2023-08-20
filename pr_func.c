#include "main.h"

/**
 * pr_func - printing function is returned.
 * @s: string to be formatted or identifying the arg.
 * @ps: index of conversion spec.
 * Return: pointer to a function
 */

int (*pr_func(const char *s, int ps))(va_list, char *, unsigned int)
{
	pr_t prt[] = {
		{"c", print_char}, {"s", print_str},
		{"i", print_int}, {"d", print_int}, {NULL, NULL},
	};
	int i = 0, j = 0, pos;

	pos = ps;
	while (prt[i].spectype)
	{
		if (s[ps] == prt[i].spectype[j])
		{
			if (prt[i].spectype[j + 1] != '\0')
				ps++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			ps = pos;
		}
	}
	return (prt[i].f);
}
