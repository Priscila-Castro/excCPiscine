/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: priscilacastro <priscilacastro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:10:43 by priscilacas       #+#    #+#             */
/*   Updated: 2025/08/20 22:30:28 by priscilacas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
    {
        return (0);
    }
    if (nb < 2)
    {
        return (1);
    }
    else
    {
        return (nb * ft_recursive_factorial(nb -1));
    }
}
/*
int main()
{
    int nb = 5;
    printf("%d\n", ft_recursive_factorial(nb));
    return (0);
}*/