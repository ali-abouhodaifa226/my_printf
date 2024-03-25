/*
** EPITECH PROJECT, 2023
** Day03
** File description:
** Putchar
*/

#include "../../my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
