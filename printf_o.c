#include <stdarg.h>
#include <stdio.h>
int print_octal(unsigned int num)
{
	int count = 0;
	printf("%o", num);
	while (num != 0) {
		num /= 8;
		count++;
	}
	return count;
}
