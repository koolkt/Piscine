##
## Makefile for  in /home/xxx/Rendu/Piscine_C_J11/lib/my
## 
## Made by xxx xxx
## Login   <flores_a@epit.oh.eu>
## 
## Started.on  .on at 20 13:11:01 2014 xxx xxx
## Last update Tue Oct 21 22:36:03 2014 xxx xxx
##

RM	= rm -f

NAME	= do-op

SRC	= main_do-op.c my_add.c  my_div.c  my_mod.c  my_mul.c  my_sub.c  pf_array.c

all: $(NAME)

$(NAME): $(SRC) ../include/my.h
	cc -o $(NAME) $(SRC) -lmy -L../lib
clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
