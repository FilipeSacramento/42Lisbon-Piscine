/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:20:04 by filigome          #+#    #+#             */
/*   Updated: 2026/09/13 18:46:15 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	itf;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		itf = 0;
		while (str[i + itf] == to_find[itf] && to_find[itf] != '\0')
		{
			++itf;
		}
		if (to_find[itf] == '\0')
		{
			return (&str[i]);
		}
		++i;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[40] = "I want to find this word please!";
// 	char	to_find[40] = "find";

// 	printf("%s", ft_strstr(str, to_find));
// 	return (0);
// }
