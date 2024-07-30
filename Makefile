SRC = 	ft_printf.c \
		print_nbr.c \
		print_str.c \
		print_hex.c 

NAME	= libftprintf.a

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

AR		= ar rcs

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@echo cleaned objects

fclean: clean
	@rm -f $(NAME)
	@echo cleaned all

re: fclean $(NAME)

test:
	gcc *.c && ./a.out
	rm -f ./a.out