/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial_main.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:20:19 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/29 00:04:19 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while (nb > 1)
	{	
		result *= nb;
		nb--;
	}
	return (result);
}

int	main(void)
{
	int	result;

	result = ft_iterative_factorial(5);
	printf("%d\n", result);
	return (0);
}
