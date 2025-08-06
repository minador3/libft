/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:24:38 by mwei              #+#    #+#             */
/*   Updated: 2025/08/06 20:47:34 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] != '\0' && i + j < len
			&& haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
// 	const char *haystack = "broccoli, bokchoi, cabbage, carrots";
// 	const char *needle = "\0";
// 	// const char *needle = "bokchoi";
// 	char *found = ft_strnstr(haystack, needle, 10);
// 	printf("%s\n", found);
// 	return (0);
// }