/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:33:09 by mwei              #+#    #+#             */
/*   Updated: 2025/08/06 16:59:10 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int						sign;
	unsigned long long		result;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		if (result > LLONG_MAX && sign == 1)
			return (-1);
		else if (result > LLONG_MAX && sign == -1)
			return (0);
		str++;
	}
	return ((int)(result * sign));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("ft_atoi : %d\n", ft_atoi("9223372036854775807"));
// 	printf("   atoi : %d\n", atoi("9223372036854775807"));
// 	printf("\n");
// 	printf("ft_atoi : %d\n", ft_atoi("9223372036854775808"));
// 	printf("   atoi : %d\n", atoi("9223372036854775808"));
// 	printf("\n");
// 	printf("ft_atoi : %d\n", ft_atoi("-9223372036854775808"));
// 	printf("   atoi : %d\n", atoi("-9223372036854775808"));
// 	printf("\n");
// 	printf("ft_atoi : %d\n", ft_atoi("-9223372036854775809"));
// 	printf("   atoi : %d\n", atoi("-9223372036854775809"));
// 	printf("\n");
// 	return (0);
// }