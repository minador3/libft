/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:18:31 by mwei              #+#    #+#             */
/*   Updated: 2025/08/06 18:30:02 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = b;
	value = (char)c;
	while (len--)
	{
		*ptr = value;
		ptr++;
	}
	return (b);
}
// #include <stdio.h>

// int main(void)
// {
// 	char b[20] = "123456789";
// 	printf("the original string is : %s\n", b);
// 	ft_memset(b, 'x', 5);
// 	printf("the modified string is : %s\n", b);
// 	return (0);
// }