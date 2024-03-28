#include <stdarg.h>
#include <stdio.h>
/**
 * print_octal - check the code
 * @num: integer
 * Return: int
 */
int print_octal(unsigned int num)
{
	int count = 0;

	printf("%o", num);
	while (num != 0)
	{
		num /= 8;
		count++;
	}
	return (count);
}
