/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 01:00:40 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/30 19:44:15 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		result = nb * ft_recursive_power(nb, (power -1));
	return (result);
}

int	main(void)
{
	int	base;
	int	power;
	int	result;

	base = 2;
	power = 2;
	result = ft_recursive_power(base, power);
	printf("%d\n", result);
	return (0);
}
