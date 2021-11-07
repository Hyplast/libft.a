/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:04:58 by severi            #+#    #+#             */
/*   Updated: 2021/11/08 01:12:52 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int		ft_strlen(char *str);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_bzero(void *s, size_t size);
void	*ft_memalloc(size_t size);
void	*ft_memset(void *s, int c, size_t size);
void	ft_memdel(void	**ap);
void	*ft_memcpy(void *dest, const void *src, size_t size);

#endif
