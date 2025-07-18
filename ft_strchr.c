/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:40:47 by mwei              #+#    #+#             */
/*   Updated: 2025/07/18 16:21:27 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * strchr(const char *s, int c)
{
    while(*s != '\0') //check if the string is valid 
    {
        if (*s == (char)c)
            return (char *)s;
        s++; //move to the next character 
    }
    if ((char)c == '\0') //if char c is the NULL terminator
        return (char *)s;
    return (NULL); // character nor found
}