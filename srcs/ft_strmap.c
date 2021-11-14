/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 01:59:53 by severi            #+#    #+#             */
/*   Updated: 2021/11/12 14:23:15 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*mem;

	mem = ft_strdup(s);
	i = 0;
	if (mem != 0)
	{
		while (mem[i] != '\0')
		{
			f(mem[i]);
			i++;
		}
	}
	return (mem);
}