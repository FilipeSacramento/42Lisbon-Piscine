/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filigome <filigome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:22:20 by filigome          #+#    #+#             */
/*   Updated: 2026/09/03 21:13:43 by filigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	zxy;

	zxy = 'z';
	while (zxy >= 'a')
	{
		write(1, &zxy, 1);
		zxy--;
	}
}
/*
int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
*/