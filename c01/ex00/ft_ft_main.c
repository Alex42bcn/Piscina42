/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:27:01 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/28 10:27:45 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int	*ptr;
	int	number;

	ptr = &number;
	ft_ft(ptr);
	printf("%p\n", ptr);
	printf("%d\n", *ptr);
	printf("%d\n", number);
	return (0);
}
