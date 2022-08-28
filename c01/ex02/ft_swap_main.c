/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:35:43 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/28 13:35:49 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;
	a = 5;
	b = 7;
	ptra = &a;
	ptrb = &b;
	
	printf("a = %d y b = %d\n", a, b);
	ft_swap(ptra,ptrb);
	printf("a = %d y b = %d\n", a, b);
	return (0);
}
