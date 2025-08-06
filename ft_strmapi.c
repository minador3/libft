/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:08:58 by mwei              #+#    #+#             */
/*   Updated: 2025/08/06 20:39:24 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
// #include <stdio.h>

// char to_astriks(unsigned int i, char c)
// {
// 	if(i % 2 == 0)
// 		return ('*');
// 	else
// 		return (c);
// }

// int main(void)
// {
// 	const char *str = "passwords";
// 	char *mapi = ft_strmapi(str, to_astriks);
// 	if(!mapi)
// 	{
// 		printf("allocation failed\n");
// 		return (1);
// 	}
// 	else
// 	{
// 		printf("mapi string : %s\n", mapi);
// 		free(mapi);
// 	}
// 	return (0);
// }