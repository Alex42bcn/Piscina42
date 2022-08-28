/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 01:00:40 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/29 01:02:29 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (nb == 0)
		return (0);
	if (power < 1)
		return (0);
	if (power > 1)
		result = nb * ft_recursive_power(nb, (power -1));
	return (result);
}

int	main(void)
{
	int	base;
	int	power;
	int	result;

	base = 5;
	power = 5;
	result = ft_recursive_power(base, power);
	printf("%d\n", result);
	return (0);
}
