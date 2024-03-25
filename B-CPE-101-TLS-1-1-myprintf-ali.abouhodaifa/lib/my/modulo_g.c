/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** create modulo g
*/

#include "../../my.h"

int display1(int i, char *buffer, int val, int precision)
{
    while (val) {
        buffer[i++] = ((val % 10) + '0');
        val = val / 10;
        if (i == precision)
            buffer[i++] = '.';
    }
    while (i--) {
        my_putchar(buffer[i]);
    }
}

int my_put_float_g(double value, int precision)
{
    int i = 0;
    int val;
    char buffer[32];

    if ((unsigned long long int) value == 0)
        my_putchar('0');
    while (i++ < precision)
        value *= 10;
    if (value < 0) {
        my_putchar('-');
        value = 0 - value;
    }
    value = value + 0.5;
    val = (int)(value);
    i = 0;
    display1(i, buffer, val, precision);
}

int modulo_g(double gvalue, int precision)
{
    if (gvalue >= 1000000)
        expodential_e(gvalue, precision);
    else
        my_put_float_g(gvalue, precision);
    return 0;
}
