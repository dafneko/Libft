NAME = libft.a
HEADERDIR = .
CCFLAGS = -Wall -Werror -Wextra

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strlen.c\
		ft_tolower.c ft_toupper.c ft_strncmp.c ft_memcmp.c ft_memcpy.c\
		ft_strchr.c ft_strrchr.c ft_memchr.c ft_strnstr.c ft_memmove.c\
		ft_strlcat.c ft_atoi.c ft_calloc.c ft_substr.c ft_strdup.c ft_strtrim.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_strmapi.c\
		ft_putnbr_fd.c\
		ft_putendl_fd.c\
		ft_striteri.c\
		ft_itoa.c\
		ft_strjoin.c\
		ft_split.c\
	


# SRC_BONUS = ${SRC_BONUS:.c=.o}

# COMPILE = cc $(CFLAGS) -c

AR = ar

OBJ = $(SRC:.c=.o)
# OBJ_BONUS = %(SRC_BONUS:.c=.o)

%.o: %.c
	cc -I $(HEADERDIR) $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) rcs $(NAME) $(OBJ)
	@echo "$(NAME) created and indexed"

all: $(NAME)

clean:
	rm -f *.o
	@echo "OBJ deleted"

fclean:
	$(MAKE) clean
	rm -f $(NAME)
	@echo "$(NAME) deleted"

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY:
	all clean fclean re