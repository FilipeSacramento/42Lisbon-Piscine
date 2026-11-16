/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 00:21:25 by filigome          #+#    #+#             */
/*   Updated: 2026/09/15 15:30:20 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello!";

// 	printf ("The string \"%s\" has %d characters.", str, ft_strlen(str));
// }