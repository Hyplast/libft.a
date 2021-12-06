/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:52:51 by severi            #+#    #+#             */
/*   Updated: 2021/12/06 15:43:12 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s_c;

	i = 0;
	s_c = (const char *)s;
	while (i < n)
	{
		if (s_c[i] == c)
		{
			return ((void *) s + i);
		}
		i++;
	}
	return (NULL);
}
