/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:10:28 by mwei              #+#    #+#             */
/*   Updated: 2025/08/06 19:57:30 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, (len_s1 + len_s2 + 1));
	ft_strlcat(result, s2, (len_s1 + len_s2 + 1));
	return (result);
}
// #include <stdio.h>

// int main(void)
// {
// 	const char *s1 = "eras ";
// 	const char *s2 = "tour";
// 	char *join = ft_strjoin(s1, s2);
// 	if(!join)
// 	{
// 		printf("allocation failed\n");
// 		return (1);
// 	}
// 	else
// 	{
// 		printf("joined string : %s\n", join);
// 		free(join);
// 	}
// 	return (0);
// }