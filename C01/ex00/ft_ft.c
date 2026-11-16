/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 21:10:50 by filigome          #+#    #+#             */
/*   Updated: 2026/09/09 21:03:54 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int	a;

	a = 24;
	printf("Valore antes: %d\n", a);
	ft_ft(&a);
	printf("Valore antes: %d\n", a);
	return (0);
}
