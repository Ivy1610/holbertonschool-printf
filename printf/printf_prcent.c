#include "main.h"
#include <stddef.h>
#include <stdarg.h>
/**
 * printf_prcent - print a %
 * @val: arguments
 * Return: 1
 */
int printf_prcent(va_list val)
{
	(void)val;
	_putchar('%');
	return (1);
}

