#include "main.h"

int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, value, num, digit;
	char *ptr;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	ptr = format;
	while (*ptr)
	{
		if (*ptr != '%' || *ptr = '%' && !handle_func(ptr))
			count += write(1, format, 1);
		else
			count += p_funcs(ptr, list);

	}

	va_end(list);
	return(count);
}
