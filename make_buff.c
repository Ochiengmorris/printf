#include "main.h"

/**
 * make_buff - outputs a buffer to the console.
 * @buff: int ...
 * @bf: buffer pointer
 * @c: parameter
 * Return: printed number of bytes.
 */

unsigned int make_buff(char *bf, char c, unsigned int buff)
{
	if (buff == 1024)
	{
		pr_buff(bf, buff);
		buff = 0;
	}
	bf[buff] = c;
	buff++;
	return (buff);
}

/**
 * pr_buff - outputs the buffer
 *
 * @bf: pointer
 * @nbuf: number of bytes to print
 *
 * Return: total number of printed bytes.
 */
int pr_buff(char *bf, unsigned int nbuf)
{
	return (write(1, bf, nbuf));
}
