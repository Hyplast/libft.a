/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:18:45 by severi            #+#    #+#             */
/*   Updated: 2021/11/19 00:09:46 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;
	int	i;

	i = 0;
	s_len = ft_strlen(s);
	while (s_len >= i)
	{
		if (s[s_len - i] == c)
		{
			return ((char *) s + (s_len - i));
		}
		i++;
	}
	return (NULL);
}
