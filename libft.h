    #ifndef LIBFT_H
    # define LIBFT_H

    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>
    #include <limits.h> // int min -2147483648  int max 2147483647

    int ft_isalpha(int i);
    int ft_isdigit(int i);
    int ft_isalnum(int i);
    int ft_isascii(int i);
    int ft_isprint (int i);
    size_t ft_strlen (const char*s);
    char * ft_strdup (const char *s1);
    size_t	ft_strlcat(char * dst, const char * src, size_t dstsize);
    size_t	ft_strlcat(char * dst, const char * src, size_t dstsize);
    size_t	ft_strlcpy(char * dst, const char * src, size_t destsize);
    int	ft_strncmp(const char *s1, const char *s2, size_t n);
    char * strchr(const char *s, int c);
    char * strrchr(const char *s, int c);
    char * strnstr(const char *haystack, const char *needle, size_t len);
    



    #endif