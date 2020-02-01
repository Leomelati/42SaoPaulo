/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 11:51:35 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/30 12:11:51 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memmove(void *dest, const void *srd, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *str, int c);

#endif
