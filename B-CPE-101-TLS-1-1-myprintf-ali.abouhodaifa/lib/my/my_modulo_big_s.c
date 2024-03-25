/*
** EPITECH PROJECT, 2023
** My_printf
** File description:
** create the fonction for modu S
*/

#include "../../my.h"

int conv_dec(int dec)
{
    int oct;
    int i;

    i = 1;
    oct = 0;
    while (dec != 0) {
        oct = oct + ((dec % 8) * i);
        dec = dec / 8;
        i = i * 10;
    }
    if (oct < 0)
        oct = oct * (-1);
    return (oct);
}

void add_0(char *str, int i)
{
    if (str[i] < 10)
        my_putstr("00");
    else if (str[i] >= 10 && str[i] < 32)
        my_putstr("0");
}

void str_to_int(char *str, int *count)
{
    int i = 0;

    while (str[i] != '\0') {
        while (str[i] < 32 || str[i] >= 127) {
            my_putstr("\\");
            add_0(str, i);
            my_put_nbr(conv_dec(str[i]));
            i = i + 1;
        }
        my_putchar(str[i]);
        i = i + 1;
    }
}
