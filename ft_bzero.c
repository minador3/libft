/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:28:03 by mwei              #+#    #+#             */
/*   Updated: 2025/08/13 11:42:01 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}
// #include <stdio.h>

// int main(void)
// {
// 	char str[20] = "abcdefg";
// 	printf("original string is :%s\n", str);
// 	ft_bzero(str, 2);
// 	printf("bzeroed string is :%s\n", str + 2);
// 	return (0);
// }