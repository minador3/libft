/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:32:49 by mwei              #+#    #+#             */
/*   Updated: 2025/07/17 16:56:02 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strdup (const char *s1)
{
    int len;
    int first;
    char *dup;

    len = 0;
    while (s1[len])
        len++;
    dup = (char *)malloc(sizeof(char) * len + 1);
    if (dup == NULL)
        return (NULL);
    first = 0;
    while (first < len)
    {
        dup[first] = s1[first];
        first++;
    }
    dup[first] = '\0';
    return (dup);
}
// return (ft_substr(s1, 0 , ft_strlen(s1)));