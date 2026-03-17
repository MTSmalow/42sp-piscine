NAME    = rush-02
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRCS    = main.c convertion.c read.c str_concat.c validation_input.c
OBJS    = $(SRCS:.c=.o)


HEADER  = rush02.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) *.gch

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re