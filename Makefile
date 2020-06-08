NAME = libasm.a

SRCS =	ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s \
		ft_strdup.s \
		ft_read.s 	\
		ft_write.s 	\
		ft_atoi_base.s	\
		ft_list_push_front.s	\
		ft_list_sort.s	\
		ft_list_size.s	\
		ft_list_remove_if.s

OBJS = $(SRCS:.s=.o)

%.o	: %.s
	nasm -f elf64 $< -o $@

$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all