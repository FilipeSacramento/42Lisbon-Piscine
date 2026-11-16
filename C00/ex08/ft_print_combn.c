/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 19:05:47 by filigome          #+#    #+#             */
/*   Updated: 2026/09/09 16:33:57 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_make_combn(int n, int *comb)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(comb[i] + '0');
		i++;
	}
	if (comb[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_place_combn(int n, int i, int first, int *comb)
{
	if (i == n)
	{
		ft_make_combn(n, comb);
		return ;
	}
	while (first <= 9)
	{
		comb[i] = first;
		ft_place_combn(n, i + 1, first + 1, comb);
		++first;
	}
}

void	ft_print_combn(int n)
{
	int	comb[9];

	if (n <= 0 || n >= 10)
	{
		write(1, "Number must be 1 through 9", 26);
	}
	else
	{
		ft_place_combn(n, 0, 0, comb);
	}
}

// int	main(void)
// {
// 	ft_print_combn(2);
// 	return (0);
// }
