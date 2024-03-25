##
## EPITECH PROJECT, 2023
## makefile_for_my_printf
## File description:
## makefile_for_my_printf
##

SRC =	lib/my/flags.c \
        lib/my/modulo_n.c \
        lib/my/my_modulo_expo.c \
        lib/my/my_put_float.c \
        lib/my/my_putstr.c \
        lib/my/print_adress_modulop.c \
        lib/my/hexadecimal.c \
	lib/my/hexadecimal_maj.c \
        lib/my/modulo_0.c \
        lib/my/modulo_g.c \
        lib/my/my_modulo_big_s.c \
        lib/my/my_putchar.c \
        lib/my/my_put_nbr.c \
        lib/my/my_put_unsigned.c \
        lib/my/my_strlen.c \
	my_printf1.c \

OBJ = $(SRC:.c=.o)

NAME = 	libmy.a

all: 	$(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all
