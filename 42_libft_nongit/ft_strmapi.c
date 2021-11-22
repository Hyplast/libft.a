/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 02:11:22 by severi            #+#    #+#             */
/*   Updated: 2021/11/22 10:53:49 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mem;

	mem = ft_strdup(s);
	i = 0;
	if (mem != 0)
	{
		while (mem[i] != '\0')
		{
			mem[i] = f(i, mem[i]);
			i++;
		}
	}
	return (mem);
}
