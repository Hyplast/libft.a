/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:04:57 by severi            #+#    #+#             */
/*   Updated: 2021/11/17 13:12:06 by ssavukos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	dest = ft_memcpy(dest, src, (ft_strlen(src)));
	dest[ft_strlen(src)] = '\0';
	return (dest);
}
