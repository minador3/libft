#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char	*s = "Hello,World!";

    // printf("ft_atoi :%d\n", ft_atoi(235));
	printf("ft_isalpha :%d\n", ft_isalpha(100));
	printf("ft_isdigit :%d\n", ft_isdigit('9'));
	printf("ft_isalnum :%d\n", ft_isalnum(58));
	printf("ft_isascii :%d\n", ft_isascii(42));
	printf("ft_strchr :%s\n", strchr(s, 'l'));
	printf("ft_strrchr :%s\n", strrchr(s, 'l'));
	return (0);
}
