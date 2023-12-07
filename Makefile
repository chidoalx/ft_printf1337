CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS = ft_print_hex.c \
ft_print_hex_u.c \
ft_printf.c \
ft_putstr.c \
ft_putchar.c \
ft_putnbr.c \
ft_put_u.c \

OBJECTS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

%.o: %.c printf.h
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)


