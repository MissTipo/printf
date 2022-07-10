#include "myprintf.h"

/**
 * convert - converts numbers.
 * @num: unsigned int
 * @base: base to convert to
 * Return: pointer to buffer.
 */

char *convert(unsigned int num, int base)
{
	static const char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
