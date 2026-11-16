/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 18:15:50 by filigome          #+#    #+#             */
/*   Updated: 2026/09/07 23:20:45 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char num1, char num2, char num3)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
	if (!(num1 == '7' && num2 == '8' && num3 == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_print(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
