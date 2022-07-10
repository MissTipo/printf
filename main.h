#ifndef _MYPRINTF_H_
#define _MYPRINTF_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
char *convert(unsigned int num, int base);
int _putchar(char c);

#endif /* _MYPRINTF_H_ i*/
