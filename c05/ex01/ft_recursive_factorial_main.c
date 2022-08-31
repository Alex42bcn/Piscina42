/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial_main.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:28:25 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/30 15:15:33 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
	{
		result = nb * (ft_recursive_factorial(nb - 1));
		return (result);
	}
}

int	main(void)
{
	int	result;

	result = ft_recursive_factorial(5);
	printf("%d\n", result);
	return (0);
}
