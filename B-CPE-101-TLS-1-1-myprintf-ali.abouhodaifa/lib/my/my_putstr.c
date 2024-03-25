/*
** EPITECH PROJECT, 2023
** Day4
** File description:
** Write a function that displays, one-by-one, the characters of a string.
** The address of the string’s first character will be found in the pointer
** passed as a parameter to the function,
** which must be prototyped as follows:
*/

#include <stdio.h>
#include "../../my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
