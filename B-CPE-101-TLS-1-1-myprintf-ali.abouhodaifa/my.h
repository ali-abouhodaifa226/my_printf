/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** create my.h
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>

void print_case_o(void);
void hexadecimal_maj(unsigned int decimalnumber);
int my_put_float_g(double gvalue, int precision);
void hexadecimal(unsigned int decimalnumber);
void printcaseo(void);
int error(const char *format, va_list ap, int count);
int my_printf(const char *format, ...);
int main(void);
int nbr_float(char after, va_list ap);
int hexa(char after, va_list ap);
int plus(char after, va_list ap);
int after_percent(const char *format, va_list ap);
void decimal_octal(unsigned int decimalnum);
void case_0(void);
int modulo_g(double value, int precision);
int display1(int i, char *buffer, int val, int precision);
int modulo_n(const char *format, int *str);
int conv_dec(int dec);
void add_0(char *str, int i);
void str_to_int(char *str, int *count);
int float_len(int nb);
void expodential_e(double nb, int precision);
void expodential_big_e(double nb, int precision);
void my_putchar(char c);
void display(int i, char *buffer, int val, int precision);
void my_put_float(double fvalue, int precision);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_put_unsigned(unsigned int nb);
int my_strlen(char const *str);
int my_put_address(long long nbr);
int my_putnbr_base_long(long nbr, char *base);

#endif /* MY_H_ */
