/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 00:52:44 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/15 01:01:19 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_while(int x)
{
	while (x <= 9)
	{	
		ft_putchar(x + 48);
		ft_putchar(',');
		x++;
	}
}

void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_while(i);
		i++;
	}
}
