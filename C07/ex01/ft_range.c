/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 22:43:01 by filigome          #+#    #+#             */
/*   Updated: 2026/09/21 22:15:55 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		++i;
	}
	return (array);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int min;
// 	int max;
// 	int *nbarray;
// 	int i;

// 	min = -5;
// 	max = 10;
// 	nbarray = ft_range(min, max);
// 	i = 0;
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