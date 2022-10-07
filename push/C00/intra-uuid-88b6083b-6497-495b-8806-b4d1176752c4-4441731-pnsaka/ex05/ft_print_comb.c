/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 01:58:14 by pnsaka            #+#    #+#             */
/*   Updated: 2022/09/22 11:23:28 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char hund, char decm, char unit)
{
	write(1, &hund, 1);
	write(1, &decm, 1);
	write(1, &unit, 1);
	if (hund != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	hund;
	char	decm;
	char	unit;

	hund = '0';
	while (hund <= '7')
	{
		decm = hund + 1;
		while (decm <= '8')
		{
			unit = decm + 1;
			while (unit <= '9')
			{
				print_char(hund, decm, unit);
				unit++;
			}	
		decm++;
		}
	hund++;
	}	
}
