/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 19:28:14 by filigome          #+#    #+#             */
/*   Updated: 2026/09/13 19:02:34 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_getlength(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l_dest;
	unsigned int	l_src;
	unsigned int	i;

	l_dest = ft_getlength(dest);
	l_src = ft_getlength(src);
	if (size <= l_dest)
	{
		return (size + l_src);
	}
	i = 0;
	while (src[i] != '\0' && (l_dest + i) < (size - 1))
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (l_dest + l_src);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[40] = " How are you today in this fine evening";
// 	char	dest[40] = "Hello!";
// 	unsigned int	size = 19;

// 	printf("%d\n%s", ft_strlcat(dest, src, size), dest);
// 	return (0);
// }
