#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
/**
 * printf_string - print a string
 * @val: arguments
 * Return: the length of the string
 */

int printf_string(va_list val)
{
	char *str;
	int len = 0;
	str = va_arg(val, char *);
	
	if (str == NULL)
		str = "(NULL)";
	
	while (*str != 0)
	{
		_putchar(*str);
		str++;
		len++;
	}
	return (len);
}
