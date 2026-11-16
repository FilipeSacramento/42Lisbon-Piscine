/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 20:10:13 by filigome          #+#    #+#             */
/*   Updated: 2026/09/05 15:10:30 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2_write(int a, int b)
{
	char	c;

	c = (a / 10) + 48;
	write(1, &c, 1);
	c = (a % 10) + '0';
	write(1, &c, 1);
	write(1, " ", 1);
	c = (b / 10) + '0';
	write(1, &c, 1);
	c = (b % 10) + '0';
	write(1, &c, 1);
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_comb2_write(num1, num2);
			num2++;
		}
		num1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/