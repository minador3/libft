/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:57:11 by mwei              #+#    #+#             */
/*   Updated: 2025/08/13 11:48:49 by mwei             ###   ########.fr       */
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

// int main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("one"));
// 	printf("%s\n", (char *)node1->content);
// 	ft_lstdelone(node1, del);
// 	node1 = NULL; // prevent accidental use
// 	return (0);
// }