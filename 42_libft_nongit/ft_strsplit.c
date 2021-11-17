/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:09:39 by severi            #+#    #+#             */
/*   Updated: 2021/11/15 14:44:41 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char	**spl_s;
	char	*c_s;

	c_s = (char*)s;
	spl_s = ft_memalloc(8);
	spl_s[0][0] = c;
	spl_s[1] = c_s;
/*	int		start;
	int		end;
	int		i;
	
	i = 0;
	start = 0;
	end = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (start == 0)
				start = i;
			else 
			{
				end = i;
				
			}
		}
		i++;
	}
*/
	return (spl_s);
}
