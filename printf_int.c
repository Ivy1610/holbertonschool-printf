#include <stdarg.h>
#include <stdio.h>

int print_integer(int num) {
        int count = 0;
        printf("%d", num);
        while (num != 0) {
                num /= 10;
                count++;
        }
        return (count);
}
