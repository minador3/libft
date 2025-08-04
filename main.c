/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:12:57 by mwei              #+#    #+#             */
/*   Updated: 2025/08/04 12:18:25 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
	// char	s[15] = "huisfvhfv";
	// 	char	*s2;
	// 	const char	s = '/';
	// const char	*s2 = "Hello, zorld!";
	// char **word = ft_split(s2, ' ');
	// char	s2[21]= "Hello, World!";
	// char	s3[20]= "abcdefghijk";

	// printf("ft_atoi :%d\n", ft_atoi("235"));
	// printf("ft_atoi :%d\n", ft_atoi("2147483648"));
	// printf("ft_atoi :%d\n", ft_atoi("-2147483649"));
	// printf("ft_atoi :%d\n", ft_atoi("99999999999999"));
	// printf("atoi :%d\n", atoi("235"));
	// printf("atoi :%d\n", atoi("2147483648"));
	// printf("atoi :%d\n", atoi("-2147483649"));
	// printf("atoi :%d\n", atoi("99999999999999"));

	// printf("before ft_bzero: %s\n", s);
	// ft_bzero(s + 2, 5);
	// printf("after ft_bzero: %s\n", s);

	// 	printf("ft_isalpha :%d\n", ft_isalpha(100));
	// 	printf("ft_isdigit :%d\n", ft_isdigit('9'));
	// 	printf("ft_isalnum :%d\n", ft_isalnum(58));
	// 	printf("ft_isascii :%d\n", ft_isascii(42));
	// 	printf("ft_isprint :%d\n", ft_isprint(42));

	// printf("ft_itoa :%s\n", ft_itoa(2147483647));
	// printf("ft_itoa :%s\n", ft_itoa(-2147483648));
	// printf("ft_itoa :%s\n", ft_itoa(-0));

	// printf("ft_memchr : %s\n", ft_memchr("Hello, World!", 'W', 8));
	// printf("ft_memcmp : %d\n", ft_memcmp("Hello", "Hello", 5));
	// printf("ft_memcpy : %s\n", ft_memcpy(s3, "Goodbye", 7));
	// printf("ft_memmove : %s\n", ft_memmove(s2, s2 + 3 , 7));
	// printf("ft_memset : %s\n", ft_memset(s2, 'h', 5));

	// while(*word)
	// {
	// 	printf("ft_split : %s\n", *word);
	// 	word++;
	// }
	// printf("ft_split : %s\n", word[0]);
	// printf("ft_split : %s\n", word[1]);

	// 	printf("ft_strchr :%s\n", strchr(s, 'l'));
	// 	printf("ft_strrchr :%s\n", strrchr(s, 'l')`);
	// 	printf("strlen :%lu\n", strlen("hi"));
	// 	printf("ft_strlen :%lu\n", ft_strlen("hi"));
	// 	ft_putnbr_fd(2147483647, 1);
	// 	printf("ft_memchar : %s\n", ft_memchr(s, 'W', 6));
	// 	printf("ft_memchar : %p\n", ft_memchr(s, 'W', 6));
	// 	printf("ft_memcmp : %d\n", memcmp(s, s2, 5));
	// 	printf("ft_memcmp : %d\n", ft_memcmp(s, s2, 5));
	// 	printf("ft_memcpy : %s\n", ft_memcpy(s, s2, 5));
	// 	printf("ft_memmove : %s\n", ft_memmove(s, s2, 3));
	// 	printf("ft_memset :%s\n", ft_memset(s2, 'h', 5));
	// 	printf("ft_strtrim : {%s}\n", ft_strtrim(s2, "h"));
	// 	printf("ft_strncmp :%d\n", ft_strncmp(&s, s2, 4));
	// 	printf("Ret: %d\n", strncmp("A", "a", 4));
	// 	return (0);
// }

// #include <fcntl.h>

// int	main(void)
// {
// 	int	fd;

// 	fd = open("fdchar", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 		return (1);
// 	ft_putchar_fd('H', fd);
// 	ft_putchar_fd('E', fd);
// 	ft_putchar_fd('L', fd);
// 	ft_putchar_fd('L', fd);
// 	close(fd);
// }

// int	main(void)
// {
// 	int	fd;

// 	fd = open("fdstr", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 		return (1);
// 	ft_putstr_fd("Hello, World!", fd);
// 	close(fd);
// }

// int	main(void)
// {
// 	int	fd;

// 	fd = open("fdendl", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 		return (1);
// 	ft_putendl_fd("Hello, World! followed by a newline", fd);
// 	close(fd);
// }

// int	main(void)
// {
// 	int	fd;
// 	int number = -2147483648;

// 	fd = open("fdnbr", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 		return (1);
// 	ft_putnbr_fd(number, fd);
// 	close(fd);
// }
