SRC_FILES= 	strcpy.c 	\
		strlen.c 	\
		memchr.c 	\
		memrchr.c	\
		rawmemchr.c	\
		strdup.c	\
		memset.c	\
		wordtab.c	\

SRC_DIR= 	src/

OBJ_DIR= 	obj/

OBJ	= 	$(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

NAME	=	lib

INCDIR	=	-Iinc/

MAKEOBJ	= 	obj

CFLAGS	=	-g -W -Wall -Wextra	

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
		@mkdir -p $(MAKEOBJ)
		gcc $(CFLAGS) $(INCDIR) -o $@ -c $<

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean: clean
			$(RM) $(NAME)

re: fclean all
