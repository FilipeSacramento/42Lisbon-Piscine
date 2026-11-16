/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 23:24:17 by filigome          #+#    #+#             */
/*   Updated: 2026/09/09 23:25:57 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		++i;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "asdyxz";

// 	printf("The String = %d\n", ft_str_is_uppercase(str));
// 	return (0);
// }