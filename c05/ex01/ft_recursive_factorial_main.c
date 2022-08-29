/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:36:55 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/28 23:38:34 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 1)
		return (0);
	else if (nb == 1)
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
