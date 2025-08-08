/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:39:54 by mwei              #+#    #+#             */
/*   Updated: 2025/08/07 14:46:10 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dst);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[20] = "abcdefghijk";
// 	printf("the original  is :%s\n", str);
// 	ft_memcpy(str + 3, str, 5);
// 	printf("after moved 	 :%s\n", str); 
// 	return (0);
// }