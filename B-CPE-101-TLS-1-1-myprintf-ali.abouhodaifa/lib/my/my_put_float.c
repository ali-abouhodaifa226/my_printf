/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** create a fonction wich display a float
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../my.h"

void display(int i, char *buffer, int val, int precision)
{
    while (val) {
        buffer[i++] = ((val % 10) + '0');
        val = val / 10;
        if (i == precision)
            buffer[i++] = '.';
    }
    while (i--)
        my_putchar(buffer[i]);
}

void my_put_float(double fvalue, int precision)
{
    int i = 0;
    int val;
    char buffer[32];

    if ((unsigned long long int) fvalue == 0)
        my_putchar('0');
    while (i++ < precision)
        fvalue *= 10.0;
    if (fvalue < 0.0) {
        my_putchar('-');
        fvalue = 0.0 - fvalue;
    }
    fvalue = fvalue + 0.5;
    val = (int)(fvalue);
    i = 0;
    display(i, buffer, val, precision);
}
