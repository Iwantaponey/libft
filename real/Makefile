SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
INC = /includes

all: libft.a

libft.a: 
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(INC)
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib libft.a

clean:
	rm -f *.o

fclean:
	clean
	rm -f libft.a

re:
	fclean
	all
