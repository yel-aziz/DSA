NAME = selection

SRCS = selectionSort.c

objs = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

$(NAME) : $(objs) $(SRCS) selectionSort.h
	gcc $(FLAGS) $(SRCS) -o $(NAME)

%.c:%.o
	gcc $(FLAGS) $(SRCS) -c $< -o $@
clean :
	rm -rf $(objs)
fclean :
	rm -rf $(objs) $(NAME)
