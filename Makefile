SRC_FILES=	string/strcpy.c 	\
		string/strlen.c 	\
		string/memchr.c 	\
		string/memrchr.c	\
		string/rawmemchr.c	\
		string/strdup.c		\
		string/memset.c		\
		wordtab.c   		\
		stdio/puts.c		\
		ctype/isalpha.c		\
		ctype/isdigit.c		\
		ctype/isalnum.c		\

SRC_DIR = 	src/

OBJ_DIR = 	obj/

OBJ	=	$(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

NAME =  	lib

INCDIR =	-Iinc/

MAKEOBJ	= 	obj

CFLAGS =	-g -W -Wall -Wextra

## RULES ##

$(OBJ_DIR)%.o:  $(SRC_DIR)%.c
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
