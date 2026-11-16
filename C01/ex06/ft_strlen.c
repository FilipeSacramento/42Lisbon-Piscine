/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:20:21 by filigome          #+#    #+#             */
/*   Updated: 2026/09/07 22:59:21 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*strtxt = "Hello world! How are you?";

// 	printf("The text: %s\n", strtxt);
// 	printf("Number of characters: %d\n",ft_strlen(strtxt));
// 	return (0);
// }
