#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>


typedef struct git_specifier
{
	char *specifier;
	int (*func)(va_list, ...);
}specifi;



int _printf(const char *format, ...);

#endif
