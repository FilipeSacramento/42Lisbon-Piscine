/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:19:19 by filigome          #+#    #+#             */
/*   Updated: 2026/09/13 18:32:25 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	idest;
	int	isrc;

	idest = 0;
	isrc = 0;
	while (dest[idest] != '\0')
	{
		++idest;
	}
	while (src[isrc] != '\0')
	{
		dest[idest] = src[isrc];
		++idest;
		++isrc;
	}
	dest[idest] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[30] = "Hello";
// 	char	src[30] = " how are you";

// 	printf("%s", ft_strcat(dest, src));
// 	return (0);
// }