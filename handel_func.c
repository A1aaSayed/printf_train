#include "main.h"

int handel_func(char specifier, va_list list)
{
	int i, len;

	specifi specifi[] = {
		{"c", p_char},
		{"s", p_string},
		{"%", p_percent},
		{"i", p_int},
		{"d", p_int},
		{"u", p_unsigned}};
	for (i = 0; specifi[i].specifi; i++)
	{
		if (specifier == specifi[i].specifi[0])
			len = specifi[i].func(args);
	}
	if (len == 0)
	{
		len  = _len + _putchar("%");
		len  = _len + _putchar(specifier);
	}
	return(len);
}
