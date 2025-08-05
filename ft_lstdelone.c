/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:57:11 by mwei              #+#    #+#             */
/*   Updated: 2025/08/05 13:16:29 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// static void	del(void *content)
// {
// 	free(content);
// }
// #include <stdio.h>

// int	main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("spring"));

// 	printf("node content is %s\n", (char *)node1->content);
// 	ft_lstdelone(node1, del);
// 	return (0);
// }

// int	main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("spring"));
// 	t_list *node2 = ft_lstnew(ft_strdup("summer"));
// 	t_list *node3 = ft_lstnew(ft_strdup("fall"));

// 	node1->next = node2;
// 	node2->next = node3;

// 	ft_lstdelone(node2, del);
// 	node1->next = node3;

// 	t_list *current = node1;
// 	while (current)
// 	{
// 		printf("node content is %s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	ft_lstdelone(node1, del);
// 	ft_lstdelone(node3, del);
// 	return (0);
// }
