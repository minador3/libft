/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:39:54 by mwei              #+#    #+#             */
/*   Updated: 2025/08/06 18:30:20 by mwei             ###   ########.fr       */
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
// 	char str[20] = "abcdefgh";
// 	printf("original string : %s\n", str);
// 	ft_memcpy(str, str + 3, 4);
// 	printf("modified string : %s\n", str);
// 	return (0);
// }