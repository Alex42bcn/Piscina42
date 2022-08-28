/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:31:41 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/28 13:33:30 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int	*********nbr9;
	int	********nbr8;
	int	*******nbr7;
	int	******nbr6;
	int	*****nbr5;
	int	****nbr4;
	int	***nbr3;
	int	**nbr2;
	int	*nbr1;

	int	num;
	num = 64;
	nbr1 = &num;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;

	printf("%d\n", num);

	ft_ultimate_ft(nbr9);
	printf("%d\n", num);;
	
	return (0);
}
