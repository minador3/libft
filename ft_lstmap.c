/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:01:27 by mwei              #+#    #+#             */
/*   Updated: 2025/08/05 17:18:17 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
// #include <stdio.h>

// void	del(void *content)
// {
// 	free(content);
// }
// void	*map_to_astriks(void *content)
// {
// 	char *str = (char *)content;
// 	char *cpy = ft_strdup(str);

// 	if (!cpy)
// 		return (NULL);
// 	int i = 0;
// 	while (cpy[i])
// 	{
// 		cpy[i] = '*';
// 		i++;
// 	}
// 	return (cpy);
// }

// int main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("this"));
// 	t_list *node2 = ft_lstnew(ft_strdup("is"));
// 	t_list *node3 = ft_lstnew(ft_strdup("a"));
// 	t_list *node4 = ft_lstnew(ft_strdup("secret"));

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;

// 	t_list *result = ft_lstmap(node1, map_to_astriks, del);
// 	t_list *temp = result;
// 	while(temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstclear(&node1, del);
// 	ft_lstclear(&result, del);
// 	return (0);
// }
