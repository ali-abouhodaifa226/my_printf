/*
** EPITECH PROJECT, 2023
** print_adress.c
** File description:
** print_adress
*/
#include <stdio.h>
#include "../../my.h"

int my_put_address(long long nbr)
{
    int i = 0;

    if ((void *)nbr == NULL)
        i += my_putstr("(nil)");
    else {
        i += my_putstr("0x");
        i += my_putnbr_base_long(nbr, "0123456789abcdef");
    }
    return (i);
}

int my_putnbr_base_long(long nbr, char *base)
{
    int i = 0;
    int size;
    long nb;

    if (nbr < 0) {
        nbr = - nbr;
        i += 1;
        my_putchar('-');
    }
    size = my_strlen(base);
    if (nbr > 0) {
        nb = nbr;
        nbr /= size;
        i += my_putnbr_base_long(nbr, base);
        i += 1;
        my_putchar(base[nb % size]);
    }
    return (i);
}
