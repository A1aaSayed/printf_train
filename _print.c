#include "main.h"

int _printf(const char *format, ...)
{
	va_list list;
	int len = 0, i, l = 5;

	va_start(list, format);

	if (format == NULL || format[0] == '%' && format[1] == '\0')
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			len += handel_func(format[i + 1], list);
			i++;
                }
		len += _putchar(format[i]);

	}

	va_end(list);
	return(len);
}
