/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** test unit
*/

#include "../my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, simple_string_flags, redirect_all_std)
{
    my_printf("%s", "hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, simple_number, redirect_all_std)
{
    my_printf("%d", 42);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, simple_char, redirect_all_std)
{
    my_printf("%c", 'a');
    cr_assert_stdout_eq_str("a");
}

Test(my_printf, simple_pourc, redirect_all_std)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, simple_number_flagi, redirect_all_std)
{
    my_printf("%i", 42);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, simple_octal_flago, redirect_all_std)
{
    my_printf("%o", 42);
    cr_assert_stdout_eq_str("52");
}

Test(my_printf, simple_number_flagu, redirect_all_std)
{
    my_printf("%u", 42);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, simple_hexa_flagx, redirect_all_std)
{
    my_printf("%x", 42);
    cr_assert_stdout_eq_str("2a");
}

Test(my_printf, simple_hexa_flagX, redirect_all_std)
{
    my_printf("%X", 42);
    cr_assert_stdout_eq_str("2A");
}

Test(my_printf, simple_hexa_flagp, redirect_all_std)
{
    my_printf("%p", 42);
    cr_assert_stdout_eq_str("0x2a");
}

Test(my_printf, mix_string_and_number, redirect_all_std)
{
    my_printf("%s %d", "hello world", 42);
    cr_assert_stdout_eq_str("hello world 42");
}

Test(my_printf, double_string, redirect_all_std)
{
    my_printf("%s%s", "he", "llo" );
    cr_assert_stdout_eq_str("hello");
}

Test(my_printf, triple_flags, redirect_all_std)
{
    my_printf("%d %p %s", 42, 42, "hey");
    cr_assert_stdout_eq_str("42 0x2a hey");
}

Test(my_printf, neg_hexa_flagX, redirect_all_std)
{
    my_printf("%X", -42);
    cr_assert_stdout_eq_str("2A");
}

Test(my_printf, neg_hexa_flagx, redirect_all_std)
{
    my_printf("%x", -42);
    cr_assert_stdout_eq_str("2a");
}

Test(my_printf, neg_octacl_flago, redirect_all_std)
{
    my_printf("%o", -42);
    cr_assert_stdout_eq_str("52");
}
