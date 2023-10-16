#include "main.h"

int (*handel_func(char *s))(va_list list, ...)
{
	int i;

	specifi specifi[] = {
		{"c", p_char},
		{"s", p_string},
		{"%", p_percent},
		{"i", p_int},
		{"d", p_int},
		{"u", p_unsigned}};
	for (i = 0; specifi[i].specifi; i++)
	{
		if (*s == specifi[i].specifi[0])
		return (specifi[i].func);
	}
	return(NULL);
}

int p_funcs(char *s, va_list ap, ...)
{
	int (*f)(va_list, ...) = handel_func(s);
	if (f) 
	{
		return f(ap, ...);
	}
	else
	{
	return (0);
	}
}
