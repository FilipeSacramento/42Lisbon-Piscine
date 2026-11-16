/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 14:03:32 by filigome          #+#    #+#             */
/*   Updated: 2026/09/15 12:04:44 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	source[] = "Hello world";
// 	char	destination[] = "SAFSGDGDHDFAsaegehewfew";

// 	ft_strcpy(destination, source);
// 	printf("\"%s\" must be = to \"%s\"", source, destination);
// }
