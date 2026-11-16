/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 19:04:55 by filigome          #+#    #+#             */
/*   Updated: 2026/09/07 20:37:26 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int x;
// 	int y;
// 	int *p1;
// 	int *p2;

// 	x = 20;
// 	y = 14;
// 	p1 = &x;
// 	p2 = &y;
// 	printf("Before: x = %d and y = %d\n", x, y);
// 	ft_swap(p1, p2);
// 	printf("After: x = %d and y = %d\n", x, y);
// 	return (0);
// }
