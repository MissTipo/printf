#ifndef _MYPRINTF_H_
#define _MYPRINTF_H_

#include <stdio.h>
#include <stdarg.h>

char *convert(unsigned int num, int base);
int _printf(const char *format, ...);

#endif /* _MYPRINTF_H_*/
