/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:01:27 by mwei              #+#    #+#             */
/*   Updated: 2025/08/13 11:56:14 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*temp;
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	while (lst)
	{
		temp = f(lst->content);
		if (!temp)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = ft_lstnew(temp);
		if (!new_node)
		{
			del(temp);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// #include <stdio.h>

// void del(void *content)
// {
// 	free(content);
// }

// void *to_dollar(void *content)
// {
// 	char *str = (char *)content;
// 	char *cpy = ft_strdup(str);
// 	if (!cpy)
// 		return (NULL);
// 	int i = 0;
// 	while(cpy[i])
// 	{
// 		cpy[i] = '$';
// 		i++;
// 	}
// 	return (cpy);
// }

// int main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("one"));
// 	t_list *node2 = ft_lstnew(ft_strdup("two"));
// 	t_list *node3 = ft_lstnew(ft_strdup("three"));

// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node1, node3);
	
// 	t_list *temp = node1;
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// 	t_list *mapi = ft_lstmap(node1, to_dollar, del);
// 	temp = mapi;
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstclear(&node1, del);
// 	ft_lstclear(&mapi, del);
// 	return (0);
// }