#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * printf_string - print a string
 * @str: char
 * Return: int the length of str
 */

int printf_string(const char *str)
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
