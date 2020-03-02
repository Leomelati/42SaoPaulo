/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 02:14:58 by lmartins          #+#    #+#             */
/*   Updated: 2020/03/02 11:40:08 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE 5

size_t	get_len(const char *str)
{
	unsigned int cont;

	cont = 0;
	while (str[cont] != '\0')
		cont++;
	return (cont);
}

int		index_caract(char *buffer, int c)
{
	int		i;

	i = 0;
	while (buffer[i] != (char)c && buffer[i])
	{
		// // printf(" %c ", buffer[i]);
		i++;
	}
	// // printf("\n");
	if (buffer[i] != (char)c)
		return (-1);
	return (i);
}

int		get_line(char **str, char **line, int i)
{
	int len;

	*line = ft_substr(*str, 0, i);
	i++;
	len = get_len(*str + 1) + 1;
	ft_memmove(*str, *str + i, len);
	if (*str[0] == '\0')
	{
		free(*str);
		*str = NULL;
	}
	return (1);
}


int		get_next_line(int fd, char **line)
{
	int				i;
	int				ret;
	static char		*str = NULL;
	char			buffer[BUFFER_SIZE + 1];

	// printf("\nStr:\n%s\n", str);
	if (BUFFER_SIZE < 1 || !line || read(fd, buffer, 0) < 0)
		return (-1);
	if (str && ((i = index_caract(str, '\n')) != -1))
	{
		// printf("\n\n\n\n\n\n\n\n\n\nEntrou no Segundo If\n");
		// printf("i: %d\n", i);
		return (get_line(&str, line, i));
	}
	while ((ret = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		// // printf("\nEntrou no While\n");
		buffer[ret] = '\0';
		str = ft_strjoin(str, buffer);
		// printf("\nstr: %s\n", str);
		if ((i = index_caract(str, '\n')) != -1)
		{
			// // printf("\nEntrou no If dentro do While\n");
			return (get_line(&str, line, i));
		}
	}
	// // printf("\nSaiu do While");
	if (str)
	{
		// // printf("\nEntrou no If do free\n");
		*line = ft_strdup(str);
		free(str);
		str = NULL;
	}
	return (ret);
}

int main(void)
{
	char *line;
	int fd;
	int end = 5;

	fd = 0;
	// fd = open("file", O_RDONLY);
	while (end--)
	{
		get_next_line(fd, &line);
		printf("%s\n", line);
	}

}
