/*
** EPITECH PROJECT, 2023
** modulo_p.c
** File description:
** modulo_p
*/

#include <stdlib.h>
#include<stdio.h>
#include "../../my.h"

void decimal_octal(unsigned int decimalnum)
{
    int octalnum[100];
    int i = 0;
    char octalChar;

    if (decimalnum == 0)
        write(1, "0", 1);
    if (decimalnum < 0) {
        write(1, "-", 1);
        decimalnum = abs(decimalnum);
    }
    while (decimalnum > 0) {
        octalnum[i] = decimalnum % 8;
        decimalnum /= 8;
        i++;
    }
    while (i > 0) {
        i--;
        octalChar = octalnum[i] + '0';
        write(1, &octalChar, 1);
    }
}

void case_0(void)
{
    write(1, "0", 2);
}
