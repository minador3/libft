/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:03:35 by mwei              #+#    #+#             */
/*   Updated: 2025/08/05 11:25:41 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		data1;
// 	char	data2;
// 	t_list	*first;
// 	t_list	*second;

// 	data1 = 42;
// 	data2 = 'b';
// 	first = ft_lstnew(&data1);
// 	second = ft_lstnew(&data2);

// 	first->next = second;
// 	printf("First node contains: %d\n", *(int *)first->content);
// 	printf("Second node contains: %c\n", *(char *)second->content);
// 	return (0);
// }
