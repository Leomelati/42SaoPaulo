#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

void    ft_bzero(void *ptr, size_t n);
int 	ft_isalpha(int c);
int		ft_isdigit(int arg);
int		ft_isprint(int arg);
void    ft_memset(void *ptr, int x, size_t n);
size_t	ft_strlen(const char *str);
int		ft_tolower(int argument);
int		ft_toupper(int arg);
int     ft_atoi(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *str1, const char *str2, size_t n);

#endif