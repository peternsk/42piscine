/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 01:44:46 by pnsaka            #+#    #+#             */
/*   Updated: 2022/10/06 22:02:25 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = nb;
	i = 1;
	if (nb <= 0)
	{
		if (nb == 0)
		{
			return (1);
		}
		return (0);
	}
	while (i != nb)
	{
		res = res * (nb - i);
		i++;
	}
	return (res);
}
