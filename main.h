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

int p_funcs(char *s, va_list ap, ...);
int (*handel_func(char *s))(va_list list, ...);

int _printf(const char *format, ...);

#endif
