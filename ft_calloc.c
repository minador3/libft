/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:23:24 by mwei              #+#    #+#             */
/*   Updated: 2025/08/06 17:21:51 by mwei             ###   ########.fr       */
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

// int	main(void)
// {
// 	int j;
// 	char *i = ft_calloc(5, sizeof(int)); // allocate memory for 5 integers 
// 	if (!i)
// 	{
// 		printf("allocation failed\n");
// 		return (1);
// 	}
// 	j = 0;
// 	while (j < 5)
// 	{
// 		printf("%d\n", i[j]); // print all the 5 digits 
// 		j++;
// 	}
// 	free(i);
// 	return (0);
// }
