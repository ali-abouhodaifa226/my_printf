/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** my_strlen
*/
#include <stdio.h>
#include "../../my.h"

int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    return (count);
}
