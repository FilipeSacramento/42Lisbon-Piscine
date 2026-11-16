/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:18:58 by filigome          #+#    #+#             */
/*   Updated: 2026/09/16 18:45:55 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0; n = 2
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] != '\0' && s1[i] == s2[i]) && i < (n - 1))
	{
		++i;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char			s1[50] = "Hello";
// 	char			s2[50] = "Helasd";
// 	unsigned int	n = 2;

// 	printf("%d", ft_strncmp(s1, s2, n));
// 	return (0);
// }
