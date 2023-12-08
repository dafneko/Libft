NAME = libft.a
HEADER = libft.h
CCFLAGS = -Wall -Werror -Wextra

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strlen.c\
		ft_tolower.c ft_toupper.c ft_strncmp.c ft_memcmp.c ft_memcpy.c\
		ft_strchr.c ft_strrchr.c ft_memchr.c ft_strnstr.c ft_memmove.c\
		ft_strlcat.c

# SRC_BONUS = ${SRC_BONUS:.c=.o}

# COMPILE = cc $(CFLAGS) -c

AR = ar

OBJ = $(SRC:.c=.o)
# OBJ_BONUS = %(SRC_BONUS:.c=.o)

%.o: %.c
	cc -I $(HEADER) $(CCFLAGS) -c $< -o $@

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

#bonus: $(OBJ) $(OBJ_BONUS)
#		$(AR) $(NAME) $^
.PHONY:
	all clean fclean re
#bonus