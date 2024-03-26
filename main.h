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

#endif
