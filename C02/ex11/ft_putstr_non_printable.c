/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 14:50:59 by filigome          #+#    #+#             */
/*   Updated: 2026/09/15 14:32:42 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;
	char			*hxdec;

	if (!str)
	{
		return ;
	}
	i = 0;
	hxdec = "0123456789abcdef";
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (c < 32 || c > 126)
		{
			ft_putchar('\\');
			ft_putchar(hxdec[c / 16]);
			ft_putchar(hxdec[c % 16]);
		}
		else
		{
			ft_putchar(c);
		}
		++i;
	}
}

// int	main(void)
// {
// 	char	str[] = "Hello\nHow are you?";

// 	ft_putstr_non_printable(str);
// 	return (0);
// }