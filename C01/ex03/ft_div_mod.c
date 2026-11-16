/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:45:14 by filigome          #+#    #+#             */
/*   Updated: 2026/09/07 14:47:24 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	int	valuediv;
// 	int	valuemod;

// 	x = 26;
// 	y = 4;
// 	valuediv = 0;
// 	valuemod = 0;
// 	ft_div_mod(x, y, &valuediv, &valuemod);
// 	printf("When dividing %d by %d\n", x, y);
// 	printf("Div value: %d\n", valuediv);
// 	printf("Mod value: %d\n", valuemod);
// 	return (0);
// }
