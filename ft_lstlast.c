/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:06:11 by mwei              #+#    #+#             */
/*   Updated: 2025/08/13 11:53:54 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>

// void del(void *content)
// {
// 	void(content);
// }

/* 
In your example with string literals ("what", "was", "that") you should not free the content (string literals are not malloced).
*/

// int main(void)
// {
// 	t_list *node1 = ft_lstnew("what");
// 	t_list *node2 = ft_lstnew("was");
// 	t_list *node3 = ft_lstnew("that");
// 	t_list *result;

// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node1, node3);

// 	result = ft_lstlast(node1);

// 	printf("the last node is %s\n", (char *)result->content);
// 	ft_lstclear(&node1, del);
// 	return (0);
// }
