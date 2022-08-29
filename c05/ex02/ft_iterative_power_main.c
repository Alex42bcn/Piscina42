/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 00:34:07 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/29 00:36:04 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > 1)
	{	
		result *= nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	int	base;
	int	power;
	int	result;

	base = 3;
	power = 3;
	result = ft_iterative_power(base, power);
	printf("%d\n", result);
	return (0);
}
