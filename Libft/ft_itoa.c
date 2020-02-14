/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 00:24:45 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/14 00:24:45 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_reverse(char *array, int len)
{
	int		i;
	char	temp;

	i = 0;
	if (array[0] == '-')
		i++;
	len--;
	while (i < len)
	{
		temp = array[i];
		array[i] = array[len];
		array[len] = temp;
		i++;
		len--;
	}
}

int		ft_numlen(int n, int *len, int *signal)
{
	unsigned int num;
	unsigned int temp;

	len[0] = 1;
	if (n < 0)
	{
		num = -n;
		len[0]++;
		signal[0] = -1;
	}
	else
	{
		num = n;
		signal[0] = 1;
	}
	temp = num;
	while (temp >= 9)
	{
		temp /= 10;
		len[0]++;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	int		len;
	int		signal;
	int		i;
	char	*array;

	num = ft_numlen(n, &len, &signal);
	array = malloc((len + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	i = 0;
	if (signal == -1)
	{
		array[i] = '-';
		i++;
	}
	while (i < len)
	{
		if (num > 9)
			array[i] = (num % 10) + '0';
		else
			array[i] = num + '0';
		num /= 10;
		i++;
	}
	ft_reverse(array, len);
	array[i] = '\0';
	return (array);
}
