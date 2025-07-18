/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:25:07 by mwei              #+#    #+#             */
/*   Updated: 2025/07/18 16:49:21 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * strrchr(const char *s, int c)
{
    const char *last;

    last = NULL;
    while(*s != '\0')
    {
        if (*s == (char)c)
            last = s;
        s++;
    }
    if ((char)s == '\0') // Check if searching for null terminator
        return (char *)s; // pointer to last occurrence or NULL
    return (char *)last; 
}