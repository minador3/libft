/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:03:45 by mwei              #+#    #+#             */
/*   Updated: 2025/08/18 11:32:18 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = dst_len;
	j = 0;
	while (src[j] && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <string.h>   // for strlcat

// int main(void)
// {
//     char src[] = "on3";

//     // Two separate identical destination buffers
//     char dst1[9] = "12345678";     // for ft_strlcat
//     char dst2[9] = "12345678";     // for strlcat

//     // Run ft_strlcat and print
//     size_t ret_ft = ft_strlcat(dst1, src, sizeof(dst1));
//     printf("ft_strlcat return: %zu\n", ret_ft);
//     printf("ft_strlcat dst:    \"%s\"\n", dst1);

//     // Run strlcat and print
//     size_t ret_sys = strlcat(dst2, src, sizeof(dst2));
//     printf("strlcat return:    %zu\n", ret_sys);
//     printf("strlcat dst:       \"%s\"\n", dst2);

//     return 0;
// }
