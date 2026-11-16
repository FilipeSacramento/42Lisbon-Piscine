/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 22:13:28 by filigome          #+#    #+#             */
/*   Updated: 2026/09/21 15:46:57 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
	{
		i++;
	}
	dest = malloc((sizeof(char) * (i + 1)));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
	free(dest);
	dest = NULL;
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src;
// 	char	*copy;

// 	src = "Hello world";
// 	copy = ft_range(src);
// 	printf("%s\n", src);
// 	printf("%s", copy);
// 	free(copy);
// 	copy = NULL;
// 	return (0);
// }