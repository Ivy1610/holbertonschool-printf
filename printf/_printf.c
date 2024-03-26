#include "main.h"
#include <stddef.h>
/**
 * _printf - function that selects the correct function to print
 * @format: identifier to look for
 *
 * Return: hte length of the string
 */
int _printf(const char * const format, ...)
{
	print_t m[] = {
		{"%s", printf_string},
		{"%c", printf_char},
		{"%%", printf_prcent},
		{NULL, NULL},
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].type_arg[0] == format[i] && m[j].type_arg[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
