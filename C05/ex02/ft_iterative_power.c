/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:37:45 by filigome          #+#    #+#             */
/*   Updated: 2026/09/15 15:37:58 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	og;

	og = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		nb = nb * og;
		--power;
	}
	return (nb);
}

// #include <stdio.h>

// int main(void)
// {
//     int nb;
//     int power;

//     nb = 5;
//     power = 2;
//     printf("%d", ft_recursive_factorial(nb));
// }