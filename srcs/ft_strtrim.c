/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:32:04 by severi            #+#    #+#             */
/*   Updated: 2021/11/23 18:22:01 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*trimmed;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	while (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
		i++;
	while (s[len - 1] == '\n' || s[len - 1] == ' ' || s[len - 1] == '\t')
		len--;
	if ((len - i) <= 0 || i >= len)
	{
		trimmed = ft_strnew(0);
		return (trimmed);
	}
	trimmed = ft_strsub(s, i, (len - i));
	if (trimmed == NULL)
		return (NULL);
	return (trimmed);
}
