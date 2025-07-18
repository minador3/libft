/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:18:31 by mwei              #+#    #+#             */
/*   Updated: 2025/07/18 20:31:59 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr;
    unsigned char value;

    unsigned char *ptr = (unsigned char *)b;
    unsigned char value = (char)c;

    while (len--)
    {
        *ptr = value;
        ptr++;
    }
    return (b);
}