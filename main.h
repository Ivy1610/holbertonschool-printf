<<<<<<< HEAD
#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <stdarg.h>

/**
 * struct print_type - struct for printer functions
 * @type_arg: format organizer tyoe:wq
 *
 * @f: function to execute print
 */

typedef struct print_type
{
	char *type_arg;
	int (*f)(va_list args);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);

int printf_char(va_list val);
int printf_string(va_list val);
int printf_prcent(va_list val);
int printf_dec(va_list args);
int printf_int(va_list args);
=======
#ifndef HOLBERTON_H
#define HOLBERTON_H

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


typedef struct print;
int _printf(const char *format, ...);
int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
>>>>>>> refs/remotes/origin/main

#endif
