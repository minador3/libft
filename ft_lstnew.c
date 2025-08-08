/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:03:35 by mwei              #+#    #+#             */
/*   Updated: 2025/08/07 11:54:50 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// #include <stdio.h>

// int main(void)
// {
// 	int value = 42;
// 	t_list *new_node;

// 	new_node = ft_lstnew(&value);
// 	if(!new_node)
// 	{
// 		printf("Allocation failed\n");
// 		return (1);
// 	}
// 	printf("node content is : %d\n", *(int *) new_node->content);
// 	printf("node next is :%p\n", (void *)new_node->next);
// 	free(new_node);
// 	return (0);
// }

// int main(void)
// {
// 	char str[] = "hello world";
// 	t_list *new_node;

// 	new_node = ft_lstnew(str);
// 	if(!new_node)
// 	{
// 		printf("allocation failed\n");
// 		return (1);
// 	}
// 	printf("%s\n", (char *)new_node->content);
// 	printf("%p\n", (void *)new_node->next);
// 	return (0);
// }

// int main(void)
// {
// 	char *ptr_c = malloc(sizeof(char));
// 	if(!ptr_c)
// 		return (1);
// 	*ptr_c = 'A';
// 	t_list *node = ft_lstnew(ptr_c);
// 	if(!node)
// 	{
// 		printf("allocation failed\n");
// 		free(ptr_c); // Free here because node was not created
// 		return (1);
// 	}
// 	printf("%c\n", *(char *)node->content);
// 	printf("%p\n", (void *)node->next);
// 	// First free the content allocated memory
// 	free(node->content);
// 	// Then free the node itself
// 	free(node);
// 	return (0);
// }