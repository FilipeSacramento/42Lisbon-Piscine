/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 16:35:46 by filigome          #+#    #+#             */
/*   Updated: 2026/09/14 04:10:28 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char			source[50] = "HelloWorld";
// 	char			destination[50] = "xxx";
// 	unsigned int	num = 5;

// 	ft_strncpy(destination, source, num);
// 	printf("\"%s\"\nChanges to\n\"%s\"", source, destination);
// 	return (0);
// }
