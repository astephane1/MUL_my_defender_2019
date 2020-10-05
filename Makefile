##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## the making
##

SRC	=	src/*.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_defender


all:	$(NAME)

$(NAME):	 $(OBJ)
	 gcc -o $(NAME) $(SRC) -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
