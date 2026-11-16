/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:54:49 by filigome          #+#    #+#             */
/*   Updated: 2026/09/07 22:59:36 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	--size;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		++i;
		--size;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	array[] = {1, 2, 3, 4, 5, 6, 7};
// 	int	size = 7;
// 	int	i = 0;

// 	printf("Numbers given: ");
// 	while (i < size)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}

// 	ft_rev_int_tab(array, size);

// 	i = 0;
// 	printf("\n\nReverse numbs: ");
// 	while (i < size)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}

// 	return (0);
// }
