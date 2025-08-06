/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:25:07 by mwei              #+#    #+#             */
/*   Updated: 2025/08/06 19:39:46 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
// #include <stdio.h>

// int main(void)
// {
// 	const char *str = "penelope";
// 	char c = 'p';
// 	char *found = ft_strrchr(str, c);
// 	if (!found)
// 	{
// 		printf("No sign of [%c] in [%s]", c, str);
// 		return (1);
// 	}
// 	else
// 		printf("Found %c in %s", c, str);
// 	return (0);
// }

// #include <stdio.h>

// int main(void)
// {
// 	const char *str = "penelope";
// 	char c = 'p';
// 	char *result = ft_strrchr(str, c);
// 	if(!result)
// 		printf("not found");
// 	else
// 		printf("found %s\n", result);
// 	return (0);
// }