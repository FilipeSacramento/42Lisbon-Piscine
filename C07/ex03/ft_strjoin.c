/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 17:07:57 by filigome          #+#    #+#             */
/*   Updated: 2026/09/23 03:54:20 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_totallen(char **strs, char *sep, int size)
{
	int	len;
	int	i;

	if (size <= 0)
	{
		return (1);
	}
	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size -1);
	return (len + 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*fullstr;
	char	*ptr;
	int		i;

	fullstr = (char *)malloc(sizeof(char) * ft_totallen(strs, sep, size));
	if (!fullstr)
	{
		return (NULL);
	}
	if (size <= 0)
	{
		fullstr[0] = '\0';
		return (fullstr);
	}
	ptr = fullstr;
	i = 0;
	while (i < size)
	{
		ptr = ft_strcpy(ptr, strs[i]);
		if (i < size - 1)
			ptr = ft_strcpy(ptr, sep);
		i++;
	}
	*ptr = '\0';
	return (fullstr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*matrix[] = {"ola", "boa", "tarde", "como", "estas", "?"};
// 	char	*separator = "___";
// 	char	*result;

// 	result = ft_strjoin(6, matrix, separator);
// 	printf("Teste 1 (Normal): %s\n", result);
// 	free(result);

// 	result = ft_strjoin(0, matrix, separator);
// 	printf("Teste 2 (Size 0): \"%s\"\n", result);
// 	free(result);

// 	return (0);
// }