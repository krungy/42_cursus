CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

SRCS = ft_print_char.c		\
		ft_print_hex.c		\
		ft_print_number.c		\
		ft_print_string.c 	\
		ft_printf.c		\

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

all : $(NAME)

$(NAME): $(OBJS)
				ar rcs $(NAME) $(OBJS)

clean :
				rm -f $(OBJS)

fclean : clean
				rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
