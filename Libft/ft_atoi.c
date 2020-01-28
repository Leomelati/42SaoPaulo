/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 00:03:28 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/28 00:03:28 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     isspace(const char letter)
{
    if (letter == ' '|| letter == '\t' || letter == '\n' || letter == '\v' ||
        letter == '\f' || letter == '\r')
        return (1);
    return (0);
}



int     ft_atoi(const char *str)
{
    int     num;
    int     count;

    num = 0;
    count = 0;
    while (isspace(str[count]) != 0 && str[count] != '\0')
    {
        count++;
    }

    return (num);
}