SRC_FILES =	main.c 		\
		string.c	\
		stdio.c		\
		ctype.c		\

SRC_DIR = 	src/

OBJ_DIR = 	obj/

OBJ =		$(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

NAME =  	unittest

INCDIR =	-Iinc/

MAKEOBJ	= 	obj

CFLAGS =	-g -W -Wall -Wextra

LIBC =		../lib

## RULES ##

$(OBJ_DIR)%.o:  $(SRC_DIR)%.c
		@mkdir -p $(MAKEOBJ)
		gcc $(CFLAGS) $(INCDIR) -o $@ -c $<
		@echo "$<"

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(LIBC)

all:		$(NAME)

build:
		@echo
		@echo "Compiling library"
		@echo
		@make re -s -C ../
		@echo
		@echo
		@echo "Compiling unit tests binary :"
		@echo
		@make -s re

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
