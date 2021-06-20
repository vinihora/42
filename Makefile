NAME = 	libft.a
FLAGS = -Wall -Werror -Wextra 
CC = 	gcc
OBJ_SRC =	$(SRC:.c=.o)
SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memccpy.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c\
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c 

BONUS = ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c 

OBJ_BONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_SRC)
	ar -rcs $(NAME) $(OBJ_SRC)

$(OBJ_SRC): $(SRC) 
	$(CC) $(FLAGS) -c $(SRC)

bonus: $(OBJ_BONUS)
	ar -rcs $(NAME) $(OBJ_BONUS)

$(OBJ_BONUS): $(SRC)
	$(CC) $(FLAGS) -c $(BONUS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ_SRC)

clean:
	$(RM) $(OBJ_SRC) $(OBJ_BONUS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re