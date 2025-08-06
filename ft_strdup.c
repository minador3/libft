/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:32:49 by mwei              #+#    #+#             */
/*   Updated: 2025/08/06 19:49:05 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		len;
	size_t		i;
	char		*dup;

	len = ft_strlen(s1);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
// #include <stdio.h>

// int main(void)
// {
// 	// const char *str = NULL;
// 	const char *str = "welcome to paris";
// 	char *dup = ft_strdup(str);
// 	if(!dup)
// 	{
// 		printf("allocation faile\n");
// 		return (1);
// 	}
// 	else
// 	{
// 		printf("allocated string : %s\n", dup);
// 		free(dup);
// 	}
// 	return (0);
// }