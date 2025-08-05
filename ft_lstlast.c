/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:06:11 by mwei              #+#    #+#             */
/*   Updated: 2025/08/05 12:53:23 by mwei             ###   ########.fr       */
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

// int main(void)
// {
// 	t_list *node1 = ft_lstnew("what");
// 	t_list *node2 = ft_lstnew("was");
// 	t_list *node3 = ft_lstnew("that");
// 	t_list *result;

// 	node1->next = node2;
// 	node2->next = node3;
// 	result = ft_lstlast(node1);

// 	printf("the last node is %s\n", result->content);
// 	return (0);
// }
