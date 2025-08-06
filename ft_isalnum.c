/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:25:48 by mwei              #+#    #+#             */
/*   Updated: 2025/08/06 17:32:04 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if (ft_isalpha(i) || ft_isdigit(i))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_isalnum(11));
// 	return (0);
// }