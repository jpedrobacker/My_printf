
SRC_DIR		=	src/
FIND_SRC	=	$(shell find $(SRC_DIR))
SRC			=	$(filter %.c, $(FIND_SRC))
OBJ			=	$(SRC:.c=.o)
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -I ./inc
NAME 		=	mylib.a

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		mkdir -p obj
		ar -rcs $(NAME) $(OBJ)
		mv $(OBJ) obj/
		clear

clean:
		rm -rf obj/
		clear


fclean:	clean
		rm -rf $(NAME)
		clear

re:	fclean all
