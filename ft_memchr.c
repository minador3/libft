/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:07:49 by mwei              #+#    #+#             */
/*   Updated: 2025/07/18 20:29:04 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr;
    unsigned char target;

    const unsigned char *ptr = (const unsigned char *)s;
    unsigned char target = (char)c;

    while (n--)
    {
        if (*ptr == target)
            return (void*)ptr;
        ptr++; 
    }
    return (NULL);
}