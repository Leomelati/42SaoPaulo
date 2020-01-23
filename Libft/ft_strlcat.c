/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:58:52 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/23 10:58:52 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_count;
	unsigned int	src_count;
	unsigned int	nt_count;

	dest_count = 0;
	src_count = 0;
	nt_count = 0;
	while (dest[dest_count] != '\0')
		dest_count++;
	while (src[src_count] != '\0')
		src_count++;
	if (size <= dest_count)
		src_count += size;
	else
		src_count += dest_count;
	while (src[nt_count] != '\0' && dest_count + 1 < size)
	{
		dest[dest_count] = src[nt_count];
		dest_count++;
		nt_count++;
	}
	dest[dest_count] = '\0';
	return (src_count);
}