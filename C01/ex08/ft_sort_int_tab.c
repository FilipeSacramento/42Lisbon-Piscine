/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 19:52:34 by filigome          #+#    #+#             */
/*   Updated: 2026/09/07 23:01:16 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	--size;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			++i;
		}
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	array[] = {6, 1, 3, 4, 5, 7, 2};
// 	int	size;
// 	int	i;

// 	size = 7;
// 	i = 0;
// 	printf("Unorganized:");
// 	while(i < size)
// 	{
// 		printf("%d ", array[i]);
// 		++i;
// 	}
// 	i = 0;
// 	ft_sort_int_tab(array, size);
// 	printf("\n\nOrganized: ");
// 	while(i < size)
// 	{
// 		printf("%d ", array[i]);
// 		++i;
// 	}

// 	return (0);
// }