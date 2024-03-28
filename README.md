#Printf
The printf projet is a collaboration project by **Aline Laurier**, **Fatma Gmati** and **Yveline Mendes**, first year students in the fundamentals program at Holberton School, in which a function named "_printf" mimmics the actual "printf" command located in the <stdio.h> library. it contains some of the basic features and functions found in "printf" manuel 3.

_printf() is a function that performs formatted ouput conversion and prints the data. its prototype is as follows:

int _printf(const char *format, ...);


##Compilation

The line of code we use to compile:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

##Requirements:

.	Used editor : vi
.	All files will be compiled on Ubuntu 20.04 LTS 
.	Code must follow the Betty style
.	Global variables are not allowed
.	No more than 5 functions per file
.	All prototypes for functions should be included in the header file main.h

###Authorized functions and macros:

- `write` (`man 2 write`)
- malloc (man 3 malloc),
- free (man 3 free),
- va_start (man 3 va_start),
- va_end (man 3 va_end),
- va_copy (man 3 va_copy),
- va_arg (man 3 va_arg)

##Specifiers
| specifier | output | exemple |
|------------|---------|---------|
| c | a single character | y |
| s |  a string | hello world |
| o |  unsigned octal integer | 2420 | 
| d or i | signed decimal integer | 2024 -2024 |
| x | unsigned hexadecimal integer | 8ca |
| u | unsigned decimal integer | 1024 |

##Files contained in this repository
|Name                |Information                        |Relevant Files                         |
|----------------|-------------------------------|-----------------------------|
| `main.h`	| Header file with the data type struct, standard libraries and custom prototypes.| `*.c compilation` |
|`_printf.c`| Main printf function file. Calls other functions.| `printf_(name of var).c file` |
| `printf_int.c` | Contains decimal and integer functions. | `None` | 
| `printf_char.c` | Custom function for char data type. | `None`
| `printf_sting.c` | Function that calls string type variable. | `None` |
| `printf_o.c` | Functions that returns octal number. | `None` |
| `printf_hex.c` | Calls hexadecimal numbers (lowercase). | `None` | 
| `printf_unsigned_int.c` | Returns an unisgined data type. | `None` |

##flowchart
:![](flowchart_printf().jpg)
