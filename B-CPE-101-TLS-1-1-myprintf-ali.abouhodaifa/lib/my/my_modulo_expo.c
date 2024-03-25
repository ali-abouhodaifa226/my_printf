/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** create fonction "expodentiel"
*/

#include "../../my.h"

int float_len(int nb)
{
    if (nb < 10) {
        my_putchar('0');
        my_put_nbr(nb);
    } else {
        my_put_nbr(nb);
    }
    return 0;
}

void expodential_e(double nb, int precision)
{
    double a = nb;
    int len = 0;

    if (nb >= 10 || nb <= -10)
        for (len; a >= 10; len++)
            a = a / 10;
    if (a < 1)
        for (len; a < 1; len++)
            a = a * 10;
    if (nb <= -1 || nb >= 1) {
        my_put_float(a, precision);
        my_putchar('e');
        my_putchar('+');
        float_len(len);
    } else {
        my_put_float(a, precision);
        my_putchar('e');
        my_putchar('-');
        float_len(len);
    }
}

void expodential_big_e(double nb, int precision)
{
    double a = nb;
    int len = 0;

    if (nb >= 10 || nb <= -10)
        for (len; a >= 10 || a <= -10; len++)
            a = a / 10;
    if (a < 1)
        for (len; a < 1; len++)
            a = a * 10;
    if (nb <= -1 || nb >= 1) {
        my_put_float(a, precision);
        my_putchar('E');
        my_putchar('+');
        float_len(len);
    } else {
        my_put_float(a, precision);
        my_putchar('E');
        my_putchar('-');
        float_len(len);
    }
}
