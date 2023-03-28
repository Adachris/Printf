#include <stdio.h>
#include "main.h"

/**
 * _printf - Printf function
 * @format: format
 *
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list list;
	
	if (format == NULL)
		return (-1);

	va_start(list, format);

	i = _print_format(format, list);

	va_end(list);

	return (i);
}
