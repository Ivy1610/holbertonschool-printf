#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...) {
	// déclaration et initialisation
	va_list args;
	int count = 0;
	const char *ptr;
	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == 'c')
			{
				count += print_char(va_arg(args, int));
			}
			else if (*ptr == 's')
			{
				count += print_string(va_arg(args, char *));
			}
			else if (*ptr == 'd' || *ptr == 'i')
			{
				count += print_integer(va_arg(args, int));
			}
			else if (*ptr == 'u')
			{
				count += print_unsigned_int(va_arg(args, unsigned int));
			}
			else if (*ptr == 'o')
			{
				count += print_octal(va_arg(args, unsigned int));
			}
			else if (*ptr == 'x' || *ptr == 'X')
			{
				count += print_hexadecimal(va_arg(args, unsigned int));
			}
			/** 
			 * else if (*ptr == 'p')
			 * {
			 *     count += print_pointer(va_arg(args, void *));
			 * }
			 */
			else if (*ptr == '%')
			{
				putchar('%');
				count++;
			}
			else
			{
				putchar('%');
				putchar(*ptr);
				count += 2;
			}
		}
		else
		{
			putchar(*ptr);
			count++;
		}
	}
	va_end(args);
	return count;
}

