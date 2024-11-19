CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

BONUS_FILES = $(wildcard *_bonus.c)

SRC_FILES = $(filter-out $(BONUS_FILES), $(wildcard *.c))

HEADERS = libft.h

SRC_OBJS = $(SRC_FILES:.c=.o)

BONUS_OBJS = $(BONUS_FILES:.c=.o)

AR = ar rcs

RM = rm -f

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(SRC_OBJS)
	$(AR) $(NAME) $(SRC_OBJS)

all: $(NAME)

bonus: $(BONUS_OBJS) 
	$(AR) $(NAME) $(BONUS_OBJS)
	touch bonus
clean:
	$(RM) $(SRC_OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
