/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** create printf with all flags
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int error(const char *format, va_list ap, int count)
{
    if (format[count] == '\0') {
        va_end(ap);
        return -1;
    }
    if (after_percent(&format[count], ap) == -1) {
        va_end(ap);
        return -1;
    }
    return 0;
}

int my_printf(const char *format, ...)
{
    va_list ap;
    int i = 0;
    int des = 0;

    va_start(ap, format);
    for (int count = 0; format[count] != '\0'; count++) {
        if (format[count] == '%') {
            count++;
            error(format, ap, count);
        } else {
            des++;
            my_putchar(format[count]);
        }
        i++;
    }
    va_end(ap);
    return i;
}
