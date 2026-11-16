/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:19:42 by filigome          #+#    #+#             */
/*   Updated: 2026/09/10 19:55:42 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	idest;
	unsigned int	isrc;

	idest = 0;
	isrc = 0;
	while (dest[idest] != '\0')
	{
		++idest;
	}
	while (src[isrc] != '\0' && isrc < nb)
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
// 	char	dest[30] = "Hello ";
// 	char	src[30] = "how are you? wrong wrong wrong wrong";
// 	unsigned int nb = 12;

// 	printf("%s", ft_strncat(dest, src, nb));
// 	return (0);
// }