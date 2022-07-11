#include "main.h"

/**
 * _printf - prints a variable number of arguments.
 * @format: pointer to the first argument.
 *
 * Return: an int
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{'p', convert_p},
		{NULL, NULL}
	};
	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	/*Calling parser function*/
	printed_chars = parser(format, f_list, ap);
	va_end(ap);
	return (printed_chars);
}
