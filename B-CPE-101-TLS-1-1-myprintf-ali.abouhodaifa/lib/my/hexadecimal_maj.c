/*
** EPITECH PROJECT, 2023
** hexadelimal_maj.c
** File description:
** hexadecimal_maj
*/
#include <stdlib.h>
#include<stdio.h>
#include "../../my.h"

void print_case_o(void)
{
    char output[] = "0";

    for (int i = 0; i < sizeof(output) - 1; i++) {
        my_putchar(output[i]);
    }
}

void hexadecimal_maj(unsigned int decimalnumber)
{
    char hexadecimalnumber[100];
    int i = 0;
    unsigned int remainder;

    if (decimalnumber == 0) {
        printcaseo();
        return;
    }
    while (decimalnumber > 0) {
        remainder = decimalnumber % 16;
        if (remainder < 10)
            hexadecimalnumber[i] = remainder + '0';
        else
            hexadecimalnumber[i] = remainder - 10 + 'A';
        decimalnumber /= 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(hexadecimalnumber[j]);
    }
}
