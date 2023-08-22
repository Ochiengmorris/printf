#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct print - struct for print func.
 * @spectype: specifier for conversion.
 * @f: pointer to printer func.
 *
 * Return: nothing
 */

typedef struct print
{
	char *spectype;
	int (*f)(va_list, char *, unsigned int);
} pr_t;

int _printf(const char *format, ...);
unsigned int make_buff(char *bf, char c, unsigned int buff);
int (*pr_func(const char *s, int ps))(va_list, char *, unsigned int);
int pr_funcev(const char *s, int ps);
int pr_buff(char *bf, unsigned int nbuf);
int print_int(va_list args, char *bf, unsigned int buff);
int print_str(va_list args, char *bf, unsigned int buff);
int print_char(va_list args, char *bf, unsigned int buff);
int print_revers(va_list args, char *bf, unsigned int buff);
int print_octa(va_list args, char *bf, unsigned int buff);
char *bnry_array_fill(char *bnr, long int int_in, int neg, int limits);
char *oct_array_fill(char *bnr, char *octa);
int pr_plus(va_list args, char *bf, unsigned int buff);
int pr_space(va_list args, char *bf, unsigned int buff);
int print_pg(va_list __attribute__((unused)), char *, unsigned int);
char *long_oct_array(char *bnr, char *octa);
char *short_oct_array(char *bnr, char *octa);
char *hex_array(char *bnr, char *hx, int upp, int limits);
int pr_lhx(va_list args, char *bf, unsigned int buff);
int pr_loct(va_list args, char *bf, unsigned int buff);
int print_brr(va_list args, char *bf, unsigned int buff);
int printlongunsignedint(va_list args, char *bf, unsigned int buff);
int printlongint(va_list args, char *bf, unsigned int buff);
int print_add(va_list args, char *bf, unsigned int buff);
int pr_sr(va_list args, char *bf, unsigned int buff);
int printlongdehex(va_list args, char *bf, unsigned int buff);
int prinhh_x(va_list args, char *bf, unsigned int buff);
int printsdecx(va_list args, char *bf, unsigned int ibuff);
int print_hexadec(va_list args, char *bf, unsigned int buff);
int printnumhex(va_list args, char *bf, unsigned int buff);
int printnumoct(va_list args, char *bf, unsigned int buff);
int print_rt(va_list args, char *bf, unsigned int buff);
int printshtint(va_list args, char *bf, unsigned int buff);
int printshrtint(va_list args, char *bf, unsigned int buff);
int print_unsigned(va_list args, char *bf, unsigned int buff);
int printuphex(va_list args, char *bf, unsigned int buff);
int prinh_x(va_list args, char *bf, unsigned int buff);
int print_dechex(va_list args, char *bf, unsigned int buff);
int printldnum(va_list args, char *bf, unsigned int buff);


#endif
