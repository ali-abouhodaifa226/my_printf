/*
** EPITECH PROJECT, 2023
** my_put_nb
** File description:
** Task03
*/

#include "../../my.h"

int my_put_nbr(int nb)
{
    int a = 1;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
        return 0;
    }
    while ((nb / a) >= 10) {
        a *= 10;
    }
    while (a > 0) {
        my_putchar((nb / a) % 10 + 48);
        a /= 10;
    }
}
