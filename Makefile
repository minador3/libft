NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
FILES = ft_atoi.c ft_isalpha.c ft_memchr.c ft_strchr.c ft_strlen.c ft_tolower.c\
ft_bzero.c ft_isascii.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_toupper.c\
ft_calloc.c ft_isdigit.c ft_memmove.c ft_strlcat.c ft_strnstr.c\
ft_isalnum.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strrchr.c\

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
