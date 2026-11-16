/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 18:06:19 by filigome          #+#    #+#             */
/*   Updated: 2026/09/03 21:07:47 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
/*
int	main(void)
{
    
	ft_putchar('C');
	ft_putchar('O');
	ft_putchar('O');
	ft_putchar('L');
	return (0);
} 
*/