/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: priscilacastro <priscilacastro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:30:51 by priscilacas       #+#    #+#             */
/*   Updated: 2025/08/20 23:04:17 by priscilacas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    int result;

    if (power < 0)
    {
        return (0);
    }
    if (nb == 0 && power == 0)
    {
        return (1);
    }
    i = 0;
    result = 1;
    while (i < power)
    {
        result = result * nb;
        i++;
    }
    return (result);
}

int main ()
{
    int nb = 0;
    int power = 0;
    printf("%d\n", ft_iterative_power(nb, power));
    return (0);
}