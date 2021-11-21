/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:59:00 by severi            #+#    #+#             */
/*   Updated: 2021/11/19 13:40:02 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	s_len;
	int	i;

	i = 0;
	s_len = ft_strlen(s);
	while (s_len >= i)
	{
		if (s[i] == c)
		{
			return ((char *) s + i);
		}
		i++;
	}
	return (NULL);
}
