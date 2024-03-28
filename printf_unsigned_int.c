#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_unsigned_int - check the code
 * @num: integer
 * Return: int
 */
int print_unsigned_int(unsigned int num)
{
	int count = 0;

	printf("%u", num);
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}
