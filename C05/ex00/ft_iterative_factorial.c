/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:36:22 by filigome          #+#    #+#             */
/*   Updated: 2026/09/21 13:28:59 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	og;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	og = nb;
	while (og > 1)
	{
		nb = (nb * (og - 1));
		--og;
	}
	return (nb);
}

// #include <stdio.h>

// int main(void)
// {
//     int nb;

//     nb = 0;
//     printf("%d", ft_iterative_factorial(nb));
// }