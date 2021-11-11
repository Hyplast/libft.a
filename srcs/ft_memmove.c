/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 02:35:24 by severi            #+#    #+#             */
/*   Updated: 2021/11/11 02:49:37 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	void	*mem;
	size_t	i;

	i = 0;
	mem = ft_memalloc(n);
	while (i < n)
	{
		mem[i] = src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = mem[i];
		i++;
	}
	return (dest);
}
