/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 22:05:00 by filigome          #+#    #+#             */
/*   Updated: 2026/09/23 03:53:34 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*nbarray;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	nbarray = (int *)malloc(sizeof(int) * (size));
	if (nbarray == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		nbarray[i] = min;
		++min;
		++i;
	}
	*range = nbarray;
	return (size);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*nbarray;
// 	int	size;
// 	int	i;

// 	min = -5;
// 	max = 10;
// 	nbarray = NULL;
// 	size = ft_ultimate_range(&nbarray, min, max);
// 	i = 0;
// 	printf("%d\n", size);
// 	while (i < ((max - min) - 1))
// 	{
// 		printf("%d, ", nbarray[i]);
// 		++i;
// 	}
// 	while (i < (max - min))
// 	{
// 		printf("%d.\n", nbarray[i]);
// 		++i;
// 	}
// 	free(nbarray);
// 	nbarray = NULL;
// 	return (0);
// }
