NAME = unit-test

SRCS = ./main.c \
	../ex06/ft_print_alphabet.c \
	../ex07/ft_print_numbers.c \
	../ex08/ft_is_negative.c \
	../ex09/ft_ft.c \
	../ex10/ft_swap.c \
	../ex11/ft_div_mod.c \
	../ex12/ft_iterative_factorial.c \
	../ex13/ft_recursive_factorial.c \
	../ex14/ft_sqrt.c \
	../ex15/ft_putstr.c \
	../ex16/ft_strlen.c \
	../ex17/ft_strcmp.c \
	./ft_putchar.c


OBJS = *.o

all : 
	gcc -c -Wall -Wextra -Werror $(SRCS)
	gcc -o $(NAME) $(OBJS)

clean :
	rm -fr *.o

fclean : clean
	rm -fr $(NAME)

re : fclean all

run : re
	./$(NAME)
