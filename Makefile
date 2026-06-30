###Variables
NAME= libftprintf.a

CC= clang

CFLAGS= -Wextra -Wall -Werror -g

SRC=ft_printf_hex.c		\
	ft_printf_numbers.c	\
	ft_printf_utils.c	\
	ft_printf.c			\

OBJ= $(SRC:.c=.o)
#Rules
#1. Compile each file individually --> cc - Wall - Wextra - Werror - g file.c- c - o file.o
#2. Linkage !
#2a. Linking an executable : --> cc - Wall - Wextra - Werror- g file1.o file2.o... - o output.exe
#2b. Linking a library : --> ar rcs libft.a file1.o file2.o...

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $^ -c -o $@

clean:
	rm -r $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean re fclean all