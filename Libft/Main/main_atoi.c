/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 11:49:45 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/28 11:50:32 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_atoi(const char *str);

int main()
{
    printf("Ft: %d\n", ft_atoi("     548"));
    printf("Função: %d\n", atoi("     548"));
    printf("Ft: %d\n", ft_atoi("     -548"));
    printf("Função: %d\n", atoi("     -548"));
    printf("Ft: %d\n", ft_atoi("     a548"));
    printf("Função: %d\n", atoi("     a548"));
    printf("Ft: %d\n", ft_atoi("     -a548"));
    printf("Função: %d\n", atoi("     -a548"));
    printf("Ft: %d\n", ft_atoi("     a-548"));
    printf("Função: %d\n", atoi("     a-548"));
    printf("Ft: %d\n", ft_atoi("     54a8"));
    printf("Função: %d\n", atoi("     54a8"));
    printf("Ft: %d\n", ft_atoi("     -54a8"));
    printf("Função: %d\n", atoi("     -54a8"));
    printf("Ft: %d\n", ft_atoi("     548a"));
    printf("Função: %d\n", atoi("     548a"));
    printf("Ft: %d\n", ft_atoi("     -548a"));
    printf("Função: %d\n", atoi("     -548a"));
    printf("Ft: %d\n", ft_atoi("     2147483647"));
    printf("Função: %d\n", atoi("     2147483647"));
    printf("Ft: %d\n", ft_atoi("     -2147483648"));
    printf("Função: %d\n", atoi("     -2147483648"));
    printf("Ft: %d\n", ft_atoi("     21474836475879"));
    printf("Função: %d\n", atoi("     21474836475879"));
    printf("Ft: %d\n", ft_atoi("     -21474836485879"));
    printf("Função: %d\n", atoi("     -21474836485879"));
    return (0);
}