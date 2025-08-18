/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:44:31 by mwei              #+#    #+#             */
/*   Updated: 2025/08/10 12:49:07 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// void del(void *content)
// {
// 	free(content);
// }

// int main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("one"));
// 	t_list *node2 = ft_lstnew(ft_strdup("two"));

// 	ft_lstadd_front(&node1, node2);
// 	t_list *temp = node1;
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstclear(&node1, del);
// 	return (0);
// }