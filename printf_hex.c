#include <stdarg.h>
#include <stdio.h>
/**
 * print_hexadecimal - check the code
 * @num: integer
 * Return: integer
 */
int print_hexadecimal(unsigned int num)
{
	int count = 0;

	printf("%x", num);
	while (num != 0)
	{
		num /= 16;
		count++;
	}
	return (count);
}
