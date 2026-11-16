/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 13:58:45 by filigome          #+#    #+#             */
/*   Updated: 2026/09/13 17:06:56 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	strl;

	i = 0;
	strl = 0;
	while (src[strl] != '\0')
	{
		++strl;
	}
	if (size == 0)
	{
		return (strl);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (strl);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char			src[50] = "Hello World";
// 	char			dest[50] = "xxxxxxxxxxxxxxxxxxxxxx";
// 	unsigned int	size;

// 	size = 6;
// 	printf("%s\n", src);
// 	printf("%s\n", dest);
// 	ft_strlcpy(dest, src, size);
// 	printf("%s\n", dest);
// 	printf("%d\n", ft_strlcpy(dest, src, size));
// 	return (0);
// }
