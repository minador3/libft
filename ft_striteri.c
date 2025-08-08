/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwei <mwei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:08:26 by mwei              #+#    #+#             */
/*   Updated: 2025/08/08 14:44:02 by mwei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
#include <stdio.h>

void to_astriks(unsigned int i, char *s)
{
	(void)i;
	*s = '*';
}

int main(void)
{
	char str[20] = "password";
	printf("original string : %s\n", str);
	ft_striteri(str, to_astriks);
	printf("modified string : %s\n", str);
	return (0);
}