NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
FILES = ft_atoi.c ft_isprint.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c\
ft_bzero.c ft_itoa.c  ft_putendl_fd.c ft_strjoin.c ft_strrchr.c\
ft_calloc.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c\
ft_isalnum.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c\
ft_isalpha.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c\
ft_isascii.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c\
ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c\

OFILES = $(FILES:.c=.o)

$(NAME): $(OFILES)
	$(AR) $(NAME) $(OFILES) 

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all 



# NAME = libft.a

# MANDATORY = ft_atoi.c\

# CC = cc 
# CFLAGS = -Wall -Wextra -Werror
# AR = ar rcs

# OBJ_FILES_MANDATORY = $(MANDATORY:.c = .o)

# all : $(NAME)

# $(NAME): $(OBJ_FILES_MANDATORY)
# 	$(AR) $(OBJ_FILES_MANDATORY) $(NAME)

# %.o: %.cc
# 	$(CC) $(CFLAGS) -c $< -o $@

# bonus: $(OBJ_FILES_BONUS) $(OBJ_FILES_MANDATORY)
# 	$(AR) $(NAME) $^

# clean: 
# 	rm -f $(OBJ_FILES_MANDATORY) $(OBJ_FILES_BONUS)

# fclean: clean 
# 	rm -f $(NAME)

# re: fclean 
