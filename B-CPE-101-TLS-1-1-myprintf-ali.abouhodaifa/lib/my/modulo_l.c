/*
** EPITECH PROJECT, 2023
** modulo_l.c
** File description:
** modulo_l
*/
#include <stdlib.h>
#include<stdio.h>
#include "../../my.h"

int modulol(long unsigned int nbr, char *base)
{
    unsigned int i = my_strlen(base);
    int rest = 0;

    if (nbr >= i) {
        rest += my_put_nbr_hexap(nbr / i, base);
        rest += my_putchar(base[nbr % i]);
    } else
        rest += my_putchar(base[nbr]);
    return (rest);
}
