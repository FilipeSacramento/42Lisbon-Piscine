/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 23:42:46 by filigome          #+#    #+#             */
/*   Updated: 2026/09/10 13:59:26 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (((str[i - 1] >= 'a') && (str[i - 1] <= 'z'))
				|| ((str[i - 1] >= 'A') && (str[i - 1] <= 'Z'))
				|| ((str[i - 1] >= '0') && (str[i - 1] <= '9')))
			{
				str[i] = str[i] + 32;
			}
		}
		++i;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "hi, how Are you? 42words forty-two; fifty+and+one";

// 	printf("Before:\n%s\n", str);
//  	printf("After:\n%s", ft_strcapitalize(str));
//  	return (0);
// }