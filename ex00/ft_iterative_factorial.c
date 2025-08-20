/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: priscilacastro <priscilacastro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 21:36:24 by priscilacas       #+#    #+#             */
/*   Updated: 2025/08/20 22:30:01 by priscilacas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int result;

    if (nb < 0)
    {
        return (0);
    }
    i = 1;
    result = 1;
    while (i <= nb)
    {
        result = result * i;
        i++;
    }
    return (result);
}
/*
int main()
{
    int nb = 5;
    printf("%d\n", ft_iterative_factorial(nb));
    return (0);
}*/