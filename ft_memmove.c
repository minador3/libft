/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:13:17 by mwei              #+#    #+#             */
/*   Updated: 2025/08/07 14:44:52 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (NULL);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
#include <stdio.h>

int main(void)
{
	char str[20] = "abcdefghijk";
	printf("the original  is :%s\n", str);
	ft_memmove(str + 3, str, 5);
	printf("after moved 	 :%s\n", str); 
	return (0);
}