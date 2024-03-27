# printf()
the printf projet is a collaboration project by **Aline Laurier**, **Fatma Gmati** and ** Yveline Mendes**, first year students in the fundamentals program at Holberton School, in which a function named "_printf" mimmics the actual "printf" command located in the <stdio.h> library. it contains some of the basic features and functions found in "printf" manuel 3.

_printf() is a function that performs formatted ouput conversion and prints the data. its prototype is as follows:

int _printf(const char *format, ...);

Compalation
The line of code we use to compile:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

Requirements

.Used editor : vi
.All files will be compiled on Ubuntu 20.04 LTS Code must follow the Betty style
.Global variables are not allowed
.No more than 5 functions per file
.All prototypes for functions should be included in the header file main.h
.Authorized functions and macros:
 write (man 2 write), malloc (man 3 malloc), free (man 3 free), va_start (man 3 va_start), va_end (man 3 va_end), va_copy (man 3 va_copy), va_arg (man 3 va_arg)
