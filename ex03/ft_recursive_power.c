/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: priscilacastro <priscilacastro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 23:07:18 by priscilacas       #+#    #+#             */
/*   Updated: 2025/08/20 23:20:10 by priscilacas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
    {
        return (0);
    }
    if (nb == 0 && power == 0)
    {
        return (1);
    }
    if (power == 0)
    {
        return (1);
    }
    else 
    {
        return (nb * ft_recursive_power(nb, power -1));
    }
}

int main()
{
    int nb = 3;
    int power = -1;
    printf("%d\n", ft_recursive_power(nb, power));
    return (0);
}