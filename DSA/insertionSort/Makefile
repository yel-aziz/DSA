NAME = insertion

SRCS = insertionSort.c

objs = ${SRCS:.c=.o}

all : $(NAME)

FLAGS = -Wall -Wextra -Werror

$(NAME) : $(objs) $(SRCS) insertionSort.h
	gcc $(FLAGS) $(SRCS) -o $(NAME)

%.c:%.o
	gcc $(FLAGS) $(SRCS) -c $< -o $@
clean :
	rm -rf $(objs)
fclean :
	rm -rf $(objs) $(NAME)

re : fclean all