/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:48:07 by filigome          #+#    #+#             */
/*   Updated: 2026/09/07 22:57:23 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 24;
// 	y = 4;
// 	printf("x = %d & y = %d\n", x, y);
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("Div = %d\nMod = %d", x, y);
// 	return (0);
// }
