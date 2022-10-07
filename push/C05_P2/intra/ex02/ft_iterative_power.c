/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:42:12 by pnsaka            #+#    #+#             */
/*   Updated: 2022/10/06 22:17:31 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}	
	while (power != 0)
	{
	res *= nb;
	power --;
	}
	return (res);
}

//int main(void)
//{
//  printf("%d", ft_iterative_power(4, 1));
//}
