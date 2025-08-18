/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:41:41 by mwei              #+#    #+#             */
/*   Updated: 2025/08/18 11:32:24 by mwei             ###   ########.fr       */
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
// #include <string.h>


// int main(void)
// {
// 	char *src = "abc";
// 	char dst1[10] = "1234567";
// 	char dst2[10] = "1234567";

	
// 	size_t ft_cpy = ft_strlcpy(dst1, src, 9);
// 	printf("%zu\n", ft_cpy);

// 	size_t cpy = strlcpy(dst2, src, 9);
// 	printf("%zu\n", cpy);
// 	return (0);
// }