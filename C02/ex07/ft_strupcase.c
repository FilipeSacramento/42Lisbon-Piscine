/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 23:28:01 by filigome          #+#    #+#             */
/*   Updated: 2026/09/09 23:38:52 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		++i;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello World!";

// 	printf("Before:\n%s\n", str);
// 	printf("After:\n%s",ft_strupcase(str));
// 	return (0);
// }
