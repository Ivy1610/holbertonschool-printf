#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int print_string(const char *str) {
	int count = 0;
	while (*str != '\0') {
		putchar(*str);
		str++;
		count++;
	}
	return count;
}

int print_integer(int num) {
	int count = 0;
	printf("%d", num);
	while (num != 0) {
		num /= 10;
		count++;
	}
	return (count);
}

int print_unsigned_int(unsigned int num) {
	int count = 0;
	printf("%u", num);
	while (num != 0) {
		num /= 10;
		count++;
	}
	return (count);
}

int print_octal(unsigned int num) {
	int count = 0;
	printf("%o", num);
	while (num != 0) {
		num /= 8;
		count++;
	}
	return (count);
}

int print_hexadecimal(unsigned int num) {
	int count = 0;
	printf("%x", num);
	while (num != 0) {
		num /= 16;
		count++;
	}
	return (count);
}

int print_pointer(void *ptr)
{
	printf("%p", ptr);
	return (2);
}

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
				case 'p':
					count += print_pointer(va_arg(args, void *));
					break;
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
