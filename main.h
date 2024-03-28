#ifdef _MAIN_H
#define _MAIN_H

int print_char(char ch);
int print_string(const char *str);
int print_integer(int num);
int print_unsigned_int(unsigned int num);
int print_octal(unsigned int num);
int print_hexadecimal(unsigned int num);
int print_pointer(void *ptr);
int _printf(const char *format, ...);

#endif
