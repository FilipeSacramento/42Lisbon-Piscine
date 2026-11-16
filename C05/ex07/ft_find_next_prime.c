/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:09:37 by filigome          #+#    #+#             */
/*   Updated: 2026/09/21 13:47:13 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
	{
		return (2);
	}
	while (n <= nb / n)
	{
		if (nb % n == 0)
		{
			return (ft_find_next_prime(nb + 1));
		}
		++n;
	}
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int nb;

// 	nb = 120;
// 	printf("%d\n%d", nb, ft_find_next_prime(nb));
// }