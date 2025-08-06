/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:41:41 by mwei              #+#    #+#             */
/*   Updated: 2025/08/06 20:27:27 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (destsize == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < destsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
// #include <stdio.h>

// int main(void)
// {
// 	const char *src = "im replacing you";
// 	char dst[] = "hello";
// 	printf("%zu\n", ft_strlcpy(dst, src, 15));
// 	return (0);
// }
