/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:12:51 by mwei              #+#    #+#             */
/*   Updated: 2025/08/07 13:43:30 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst); // find the last node in the list
	if (!last)
		*lst = new; // if the list is empty, new becomes the head
	else
		last->next = new; // otherwise, link the last node's next to new
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list *head = NULL;
// 	t_list *node1 = ft_lstnew("1");
// 	t_list *node2 = ft_lstnew("2");

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);

// 	printf("the first node: %c\n", *(char *)head->content);
// 	printf("the second node: %c\n", *(char *)head->next->content);
// 	return (0);
// }
