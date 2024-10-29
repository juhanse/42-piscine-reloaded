CC = gcc

NAME = libft.a

PATH_SRC = ./srcs/

HEADER = ./include/libft.h

FLAGS = -Wall -Wextra -Werror

OPTION = -c -I $(HEADER)

SRC = 	$(PATH_SRC)ft_putchar.c \
		$(PATH_SRC)ft_putstr.c \
		$(PATH_SRC)ft_strcmp.c \
		$(PATH_SRC)ft_strlen.c \
		$(PATH_SRC)ft_swap.c \

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re