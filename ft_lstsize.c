/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:44:39 by mwei              #+#    #+#             */
/*   Updated: 2025/08/07 13:17:02 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	l_len;

	l_len = 0;
	while (lst)
	{
		lst = lst->next;
		l_len++;
	}
	return (l_len);
}

// #include <stdio.h>

// void del(void *content)
// {
// 	(void)content;
// }

// int main(void)
// {
// 	t_list *node1 = ft_lstnew("hello");
// 	t_list *node2 = ft_lstnew("paris");
// 	t_list *node3 = ft_lstnew("ny");
// 	t_list *node4 = ft_lstnew("ad");

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
	
// 	printf("%d\n", ft_lstsize(node1));
// 	ft_lstclear(&node1, del);
// 	return (0);
// }
