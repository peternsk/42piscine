/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:30:50 by pnsaka            #+#    #+#             */
/*   Updated: 2022/10/06 12:37:13 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (i * i != nb)
	{
		if (i > nb / i)
			return (0);
		i++;
	}	
	return (i);
}

//int	main(void)
//{
//	printf("%d", ft_sqrt(4000000));
//	return (0);
//}
