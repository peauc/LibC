SRC_FILES= 	strcpy.c \
		strlen.c \
		memchr.c \
		memrchr.c\
		rawmemchr.c\

SRC_DIR= 	src/

OBJ_DIR= 	obj/

OBJ	= 	$(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

NAME= 		lib

MAKEOBJ	= obj

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
		@mkdir -p $(MAKEOBJ)
		gcc $(INCDIR) -o $@ -c $<

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean: clean
			$(RM) $(NAME)

re: fclean all
