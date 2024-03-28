#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * printf_string - print a string
 * @val: arguments
 * Return: the length of the string
 */

int print_string(const char *str)
{
	int count = 0;

	while (*str != 0)
	{
		putchar(*str);
		str++;
		count++;
	}
	return (count);
}
