/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:39:44 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/31 21:40:10 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_spaces_and_sings(char *str, int *ptr_i)
{
	int	i;
	int	sing;

	i = 0;
	sing = 1;
	while (str[i] != '\0')
	{	
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		else if (str[i] == '-' || str[i] == '+')
		{	
			if (str[i] == '-')
				sing *= -1;
			i++;
		}
		else
			break ;
	}	
	*ptr_i = i;
	return (sing);
}

int	ft_atoi(char *str)
{
	int	i;
	int	*ptr_i;
	int	sing;
	int	numb;

	ptr_i = &i;
	sing = ft_spaces_and_sings(str, ptr_i);
	numb = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			numb *= 10;
			numb += (str[i] - 48);
			i++;
		}
		else
			break ;
	}
	numb *= sing;
	return (numb);
}

/*int	main(void)
{
	char	s[] = "  	 ---+--+01234567890abABZa234";

	printf("%d", ft_atoi(s));
}*/
