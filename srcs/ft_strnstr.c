/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:50:42 by severi            #+#    #+#             */
/*   Updated: 2021/11/14 20:43:31 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	needle_len;
	size_t	haystack_len;
	char	*subs;

	i = 0;
	needle_len = strlen(needle);
	haystack_len = strlen(haystack);
	subs = ft_strnew(haystack_len);
	while (n > i && needle_len + i <= haystack_len)
	{
		subs = ft_strncpy(subs, haystack, needle_len);
		if (ft_strcmp(subs, needle) == 0)
			return ((char *)&(haystack[i]));
		i++;
	}
	return (NULL);
}
