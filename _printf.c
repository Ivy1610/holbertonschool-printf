#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...) {
	// declaration et initialisation
	va_list args;
	int count = 0;
	const char *ptr;
	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			switch (*ptr)
			{
				case 'c':
					count += print_char(va_arg(args, int));
					break;
				case 's':
					count += print_string(va_arg(args, char *));
					break;
				case 'd':
				case 'i':
					count += print_integer(va_arg(args, int));
					break;
				case 'u':
					count += print_unsigned_int(va_arg(args, unsigned int));
					break;
				case 'o':
					count += print_octal(va_arg(args, unsigned int));
					break;
				case 'x':
				case 'X':
					count += print_hexadecimal(va_arg(args, unsigned int));
					break;
				/** 
				 * case 'p':
					count += print_pointer(va_arg(args, void *));
					break;
					*/
				case '%':
					putchar('%');
					count++;
					break;
				default:
					putchar('%');
					putchar(*ptr);
					count += 2;
					break;
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
