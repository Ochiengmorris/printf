#include "main.h"

/**
 * pr_funcev - return = no of identifiers.
 * @s: argument
 * @ps: argument (index).
 * Return: no of identifiers.
 */

int pr_funcev(const char *s, int ps)
{
	pr_t prt[] = {
		{"c", print_char}, {"s", print_str}, {"i", print_int},
		{"d", print_int}, {NULL, NULL},
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
	return (j);
}
