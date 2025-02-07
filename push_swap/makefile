SRCS= 	srcs/ft_dlstadd_back.c srcs/ft_dlstdelone.c srcs/ft_dlstnew.c srcs/listhandl.c srcs/op1.c \
		srcs/op3.c srcs/sorter.c srcs/ft_dlstclear.c srcs/ft_dlstlast.c srcs/ft_dlstsize.c  srcs/main.c \
		srcs/op2.c  srcs/simplesrt.c

		

OBJ = $(SRCS:srcs/%.c=obj/%.o)

CC = cc 
CFLAGS = -Wall -Wextra -Werror

LIB_BATH = ./libft

LIB_L = -L./libft -lft

INCLUDE = -I./include 
INC2 = -I./libft/include

NAME = push_swap

all : LIB $(NAME)

LIB:
	make -C $(LIB_BATH) 

$(NAME) : $(OBJ)
	$(CC) $^  $(LIB_L) -o $@

obj/%.o : srcs/%.c
	mkdir -p obj
	$(CC) $(CFLAGS) $(INCLUDE) $(INC2) -c $< -o $@


clean :
	make -C $(LIB_BATH) clean
	rm -f $(OBJ)
	rm -rf obj
	echo "Cleaned"

fclean : clean
	make -C $(LIB_BATH) fclean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re LIB

