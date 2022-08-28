/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:38:14 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/28 13:38:21 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;
	
	a = 5;
	b = 3;
	//div = 0;
	//mod = 0;

	printf("&div= %p, &mod= %p\n", &div, &mod);
	ft_div_mod(a,b,&div,&mod);
	printf("num_a=%d num_b=%d div=%d mod=%d\n",a,b,div,mod);

	return (0);
}
