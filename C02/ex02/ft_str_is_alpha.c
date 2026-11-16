/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:45:42 by filigome          #+#    #+#             */
/*   Updated: 2026/09/13 14:42:33 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
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
// 	char str[] = "abcdABCD";

// 	printf("Text inputed = %d\n", ft_str_is_alpha(str));
// 	return (0);
// }