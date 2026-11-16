/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:22:55 by filigome          #+#    #+#             */
/*   Updated: 2026/09/17 16:10:53 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while (n * n <= nb)
	{
		if (n * n == nb)
		{
			return (n);
		}
		++n;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int nb;

// 	nb = 100;
// 	printf("%d\n%d", nb, ft_sqrt(nb));
// }