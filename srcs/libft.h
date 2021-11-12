/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:04:58 by severi            #+#    #+#             */
/*   Updated: 2021/11/12 17:33:43 by severi           ###   ########.fr       */
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
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *s);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_bzero(void *s, size_t size);
void	*ft_memalloc(size_t size);
void	*ft_memset(void *s, int c, size_t size);
void	ft_memdel(void	**ap);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t size);
char	*ft_strnew(size_t size);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_strclr(char *s);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_strdel(char **as);
void	*memmove(void *dest, const void *src, size_t n);
char	*strcpy(char *dest, const char *src);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strcat(char *dest, const char *src);

#endif
