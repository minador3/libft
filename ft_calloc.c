/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:23:24 by mwei              #+#    #+#             */
/*   Updated: 2025/08/13 11:42:11 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}

// #include <stdio.h>

// int main(void)
// {
//     char *p = ft_calloc(5, sizeof(char)); // allocate 5 zeroed bytes
//     if (!p)
//         return (1);

//     printf("[%s]\n", p); // should print an empty string
//     free(p);
//     return (0);
// }
