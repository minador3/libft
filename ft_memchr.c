/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:07:49 by mwei              #+#    #+#             */
/*   Updated: 2025/08/06 17:56:02 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		target;

	target = c;
	ptr = s;
	while (n--)
	{
		if (*ptr == target)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
// #include <stdio.h>

// int main(void)
// {
// 	const char *str = "apple";
// 	char c = 'q';
// 	void *found = ft_memchr(str, c, 5);
	
// 	if(!found)
// 	{
// 		printf("No sign of [%c] in [%s]\n", c, str);
// 		return (1);
// 	}
// 	else
// 	{
// 		printf("Found [%c] in  :%s\n", c, (char *)found);
// 		return (0);
// 	}
// }