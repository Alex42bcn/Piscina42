/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:56:29 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/30 19:56:59 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (result);
}

/*int	main(void)
{
	int	index;
	int	result;

	index = 8;
	result = ft_fibonacci(index);
	printf("%d\n", result);
	return (0);
}*/
