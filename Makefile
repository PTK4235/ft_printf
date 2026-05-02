NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_converter.c \
	ft_printf.c

DIR_LIBFT = libft/libft_extend
SRC_LIBFT_FILE = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_strpbrk.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c	\
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_atoi_base.c \
	ft_atoi_piscine.c \
	ft_bubble_sort.c \
	ft_facto.c \
	ft_find_next_prime.c \
	ft_is_prime.c \
	ft_power.c \
	ft_put_nbr_base.c \
	ft_sqrt.c \
	ft_str_is_alpha.c \
	ft_str_is_lowercase.c \
	ft_str_is_numeric.c \
	ft_str_is_printable.c \
	ft_str_is_uppercase.c \
	ft_strcapitalize.c \
	ft_strcat.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strlw.c \
	ft_strncat.c \
	ft_strncpy.c \
	ft_strstr.c \
	ft_strupcase.c \
	ft_swap.c \
	ft_putnbr_fd_size.c

SRC_LIBFT = $(addprefix $(DIR_LIBFT)/, $(SRC_LIBFT_FILE))

OBJ = $(SRC:.c=.o) $(SRC_LIBFT:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
 