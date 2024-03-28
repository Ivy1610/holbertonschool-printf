#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

int print_char(char ch);
int printf_string(const char *str);
int print_integer(int num);
int print_unsigned_int(unsigned int num);
int print_octal(unsigned int num);
int print_hexadecimal(unsigned int num);
int print_pointer(void *ptr);

int _printf(const char *format, ...);

#endif
