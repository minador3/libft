/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:03:35 by mwei              #+#    #+#             */
/*   Updated: 2025/08/04 13:44:19 by mwei             ###   ########.fr       */
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
// 	int		value;
// 	t_list	*node;

// 	value = 42;
// 	node = ft_lstnew(&value);
// 	if (!node)
// 	{
// 		printf("fail to create node");
// 		return (1);
// 	}
// 	printf("content of node: %d\n", *(int *)(node->content));
// 	if (node->next == NULL)
// 		printf("the next node is NULL");
// 	else
// 		printf("the next node is not null");
// 	free(node);
// 	return (0);
// }
