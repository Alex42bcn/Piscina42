/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 01:10:55 by apicanyo          #+#    #+#             */
/*   Updated: 2022/09/01 01:12:01 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sing;
	int	count;

	i = 0;
	sing = 1;
	count = 0;
	while ((str[i] && str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sing *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			count *= 10;
			count += (str[i] - 48);
			i++;
	}
	return (count * sing);
}

int	main(void)
{
	char	str[] = "   	---++--321_43sdAl";

	printf("El numero int es:%d\n", ft_atoi(str));
	return (0);
}
