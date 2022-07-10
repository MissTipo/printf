#include "myprintf.h"

/**
 * _printf - prints a variable number of arguments.
 * @format: pointer to the first argument.
 *
 * Return: an int
 */

int _printf(const char *format, ...)
{
	const char *traverse;
	char *s;
	char c;
	int d, i;

	va_list ap;
	va_start(ap, format);
	for (traverse = format; *traverse != '\0'; traverse++ )
	{
		while (*traverse != '%')
		{
			putchar(*traverse);
			traverse++;
		}
		 traverse++;
		  switch(*traverse)
		  {
			  case 's' : s = va_arg(ap, char*);
				     fputs(s, stdout);
				     break;
			  case 'c' : c = va_arg(ap, int);
				     putchar(c);
				     break;
			  case 'd' : d = va_arg(ap, int);
				     if (d < 0)
				     {
					     d = -d;
					     putchar('-');
				     }
				     fputs(convert(d, 10), stdout);
				     break;

			  case 'i' : i = va_arg(ap, int);
				     if (i < 0)
				     {
					     i = -i;
					     putchar('-');
				     }
				     fputs(convert(i, 10), stdout);
				     break;
		  }
	}
	putchar('\n');
	return (*format);

	va_end(ap);
}

