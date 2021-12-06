/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:52:51 by severi            #+#    #+#             */
/*   Updated: 2021/12/06 16:51:00 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s_c;

	i = 0;
	s_c = (char *)s;
	while (i < n)
	{
		if ((unsigned char)s_c[i] == (unsigned char)c)
		{
			return ((void *) s + i);
		}
		i++;
	}
	return (NULL);
}
