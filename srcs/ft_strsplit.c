/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:09:39 by severi            #+#    #+#             */
/*   Updated: 2021/11/25 13:20:22 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;
	int	begin;

	begin = 0;
	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && begin == 0)
		{
			words++;
			begin = 1;
		}
		else if (s[i] == c)
			begin = 0;
		i++;
	}
	return (words);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**spl_s;
	int		start;
	int		i;
	int		j;
	int		words;

	i = 0;
	j = 0;
	start = -1;
	words = count_words(s, c);
	ft_putstr("Words:  ");
	ft_putnbr(words);
	ft_putchar('\n');
	spl_s = (char **)malloc(sizeof(spl_s) * (words + 1));
	while (s[i] != '\0')
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			if (start == -1)
				start = i + 1;
			else if (start != -1)
			{
				spl_s[j++] = ft_strsub(s, start, (i - start));
				start = -1;
			}
		}
		else if (start == -1)
			start = i;
		i++;
	}
	return (spl_s);
}
