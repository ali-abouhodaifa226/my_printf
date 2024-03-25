/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** create put_unsigned
*/

#include "../../my.h"

int my_put_unsigned(unsigned int nb)
{
    unsigned int i;

    if (nb > 9)
        my_put_nbr(nb / 10);
    i = nb % 10 + 48;
    my_putchar(i);
    return (0);
}
