CC = cc
FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
SRC = ft_printf.c ft_printf_utils.c ft_print_char.c _ft_print_num.c
OBJ = $(SRC: %.c=%.0)

all = $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $?

.PHONY all clean fclean re