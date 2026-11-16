/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 19:32:25 by filigome          #+#    #+#             */
/*   Updated: 2026/09/24 20:12:21 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_baselen(char *base)
{
	int i;

	while (base[i] != '\0')
	{
		++i;
	}
	return (i);
}

int ft_checkbase(char *base)
{
	
}

void	ft_putnbr_base(int nbr, char *base)
{
	char nbase;
	int baselen;

	baselen = ft_baselen(base);
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= baselen)
	{
		ft_putnbr_base(nbr / baselen, base);
	}
	nbr = nbr % baselen;
	nbase = base[nbr];
	write(1, &nbase, 1);
}

int	main(void)
{
	int nbr;
	char *base;

	nbr = 8;
	base = "012345";

	ft_putnbr_base(nbr, base);
}