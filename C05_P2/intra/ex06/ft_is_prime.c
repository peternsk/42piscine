/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:16:08 by pnsaka            #+#    #+#             */
/*   Updated: 2022/10/06 13:06:00 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	countdown;

	countdown = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (2);
	while (nb % != 0)
		countdown++;
	{
		if (nb == countdown)
			return (1);
	}
	return (0);
}

//int	main(void)
//{
//	printf("%d", ft_is_prime(50));
//	return (0);
//}
