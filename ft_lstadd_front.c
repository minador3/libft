/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:44:31 by mwei              #+#    #+#             */
/*   Updated: 2025/08/07 12:05:21 by mwei             ###   ########.fr       */
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

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head = NULL;

// 	ft_lstadd_front(&head, ft_lstnew("World"));
// 	ft_lstadd_front(&head, ft_lstnew("Hello"));

// 	while(head)
// 	{
// 		printf("the content is : %s\n", head->content);
// 		head = head->next;
// 	}
// 	return (0);
// }