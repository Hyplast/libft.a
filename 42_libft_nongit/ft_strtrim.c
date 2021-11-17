/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:32:04 by severi            #+#    #+#             */
/*   Updated: 2021/11/14 23:07:24 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*trimmed;
	int		i;
	int		j;
	int		len;
	int		trim_len;

	len = ft_strlen(s);
	i = 0;
	j = 0;
	while (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
		i++;
	while (s[len] == '\n' || s[len] == ' ' || s[len] == '\t')
		len--;
	trim_len = len - i;
	trimmed = ft_strnew(trim_len);
	if (trimmed == NULL)
		return (NULL);
	while (j < trim_len)
		trimmed[j++] = s[i];
	return (trimmed);
}
