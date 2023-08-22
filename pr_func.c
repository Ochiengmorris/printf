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
		{"c", print_char}, {"s", print_str}, {"i", print_int},
		{"d", print_int}, {"lo", pr_loct}, {"p", print_add},
		{"lx", pr_lhx}, {"r", print_revers}, {" d", pr_space},
		{"#i", print_int}, {"#d", print_int}, {"lu", printlongunsignedint},
		{" i", pr_space}, {"+d", pr_plus}, {"+i", pr_plus},
		{"+ i", pr_plus}, {" +d", pr_plus}, {" +i", pr_plus},
		{"+ d", pr_plus}, {" %", print_pg}, {"l", print_pg},
		{"ld", printlongint}, {"b", print_brr}, {"%", print_pg},
		{"u", print_unsigned}, {"o", print_octa}, {"x", print_hexadec},
		{"X", print_dechex}, {"S", pr_sr}, {"li", printlongint},
		{"ld", printlongint}, {"lu", printlongunsignedint},
		{"lx", pr_lhx}, {"lX", printlongdehex}, {"hi", printshtint},
		{"hd", printshtint}, {"hu", printshrtint}, {"ho", printldnum},
		{"hx", prinhh_x}, {"hX", prinh_x}, {"#o", printnumoct},
		{"#x", printnumhex}, {"#X", printuphex}, {"#u", print_unsigned},
		{"+u", print_unsigned}, {"+o", print_octa}, {"+x", print_hexadec},
		{"+X", print_dechex}, {" u", print_unsigned}, {" o", print_octa},
		{" x", print_hexadec}, {" X", print_dechex}, {"R", print_rt},
		{"h", print_pg},
		{NULL, NULL},
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
