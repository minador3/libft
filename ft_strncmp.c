/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:58:46 by mwei              #+#    #+#             */
/*   Updated: 2025/08/06 20:43:01 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>

// int main(void)
// {
// 	const char *s1 = "hello";
// 	const char *s2 = "heolo";
// 	int c = ft_strncmp(s1, s2, 2);
// 	if(!c)
// 	{
// 		printf("no comparison happened\n");
// 		return (1);
// 	}
// 	else
// 		printf("the difference is %d\n", c);
// 	return (0);
// }