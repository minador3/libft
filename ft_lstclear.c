/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:17:07 by mwei              #+#    #+#             */
/*   Updated: 2025/08/13 11:45:27 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

// void del(void *content)
// {
// 	free(content);
// }

// #include <stdio.h>

// int main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("one"));
// 	t_list *node2 = ft_lstnew(ft_strdup("two"));
// 	t_list *node3 = ft_lstnew(ft_strdup("three"));
// 	t_list *node4 = ft_lstnew(ft_strdup("four"));
// 	t_list *node5 = ft_lstnew(ft_strdup("five"));


// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node1, node3);
// 	ft_lstadd_back(&node1, node4);
// 	ft_lstadd_back(&node1, node5);
	
// 	ft_lstclear(&node3, del);
// 	node2->next = NULL;
// 	t_list *temp = node1;
// 	while (temp)
// 	{
// 		printf("%s\n", temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstclear(&node1, del);
// 	return (0);
// }
