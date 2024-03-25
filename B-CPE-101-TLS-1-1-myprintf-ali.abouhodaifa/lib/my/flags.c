/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** create flags
*/

#include <stdlib.h>
#include <stdarg.h>
#include "../../my.h"


int nbr_float(char after, va_list ap)
{
    if (after == 'f' || after == 'F') {
        my_put_float(va_arg(ap, double), 6);
        return 0;
    }
    if (after == 'e') {
        expodential_e(va_arg(ap, double), 6);
        return 0;
    }
    if (after == 'E') {
        expodential_big_e(va_arg(ap, double), 6);
        return 0;
    }
    if (after == 'g' || after == 'G') {
        modulo_g(va_arg(ap, double), 4);
        return 0;
    }
    return -1;
}

int hexa(char after, va_list ap)
{
    if (after == 'o') {
        decimal_octal(va_arg(ap, unsigned int));
        return 0;
    }
    if (after == 'u') {
        my_put_unsigned(va_arg(ap, unsigned int));
        return 0;
    }
    if (after == 'x') {
        hexadecimal(va_arg(ap, unsigned int));
        return 0;
    } else if (after == 'X') {
        hexadecimal_maj(va_arg(ap, unsigned int));
        return 0;
    }
    return -1;
}

int plus(char after, va_list ap)
{
    if (after == 'i' || after == 'd') {
        my_put_nbr(va_arg(ap, int));
        return 0;
    }
    if (after == '%') {
        my_putchar('%');
        return 0;
    }
    if (after == 'p') {
        my_put_address(va_arg(ap, void *));
        return 0;
    }
    if (after == 'm') {
        my_putstr("Success");
        return 0;
    }
    return -1;
}

int after_percent(const char *format, va_list ap)
{
    char after = format[0];

    plus(after, ap);
    hexa(after, ap);
    nbr_float(after, ap);
    if (after == 'n') {
        modulo_n(format, va_arg(ap, int *));
        return 0;
    }
    if (after == 'c') {
        my_putchar((char)va_arg(ap, int));
        return 0;
    }
    if (after == 's') {
        my_putstr(va_arg(ap, char *));
        return 0;
    }
    return -1;
}
