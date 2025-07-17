#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h> // int min -2147483648  int max 2147483647

int ft_atoi(const char *str);
int ft_isalpha(int i);
int ft_isdigit(int i);
int ft_isalnum(int i);
int ft_isascii(int i);
int ft_isprint (int i);
size_t ft_strlen (const char*s);
char * ft_strdup (const char *s1);

#endif