#include "main.h"

int _printf(const char *format, ...)
{
	va_list list;
	int count = 0;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				char ch = va_arg(list, int);
				putchar(ch);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list, char*);
				while (*str)
				{
					putchar(*str);
					str++;
					count++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				count++;
			}
		}
		format++;
	}

	va_end(list);
	return(count);
}
