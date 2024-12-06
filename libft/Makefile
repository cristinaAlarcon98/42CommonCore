NAME = libft.a
CC = cc
CFLAGS = -WALL -WERROR -WEXTRA -g3 -O3 -fsanitize-address -fsanitize-unknown
AR = ar rcs

SRC = SOURCEFILE.c \
		SOURCE2.c \

OBJ = $(SRC%.c=%.o)

.c.o
$(NAME):
	$(CC) $$(CFLAGS)

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus 
