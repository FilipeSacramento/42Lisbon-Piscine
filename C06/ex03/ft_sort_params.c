/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 00:07:57 by filigome          #+#    #+#             */
/*   Updated: 2026/09/20 21:35:50 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strcmpr(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		++i;
	}
	return (str1[i] - str2[i]);
}

void	printstr(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		write(1, &str[j], 1);
		++j;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		if (strcmpr(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
		}
		else
		{
			++i;
		}
	}
	i = 1;
	while (i < argc)
	{
		printstr(argv[i]);
		++i;
	}
	return (0);
}

// void	strswap(char *str1, char *str2)
// {
// 	char	*temp;

// 	temp = str1;
// 	str1 = str2;
// 	str2 = temp;
// }
