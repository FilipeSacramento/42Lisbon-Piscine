/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:12:04 by filigome          #+#    #+#             */
/*   Updated: 2026/09/21 13:42:25 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (n * n <= nb)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		++n;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int nb;

	nb = 2147483647;
	printf("%d\n%d", nb, ft_is_prime(nb));
}