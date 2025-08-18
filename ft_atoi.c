/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:33:09 by mwei              #+#    #+#             */
/*   Updated: 2025/08/13 11:41:58 by mwei             ###   ########.fr       */
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
// 	char *str = "				   -+35745445343545435435";
// 	if (ft_atoi(str) == atoi(str))
// 		printf("they are equal\n");
// 	else
// 		printf("they are not equal\n");
// 	return (0);
// }