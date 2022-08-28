/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:13:45 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/28 19:41:20 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] != '\0' || str[1] != '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] <= 32 || str[i] == 127)
			return (1);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_spaces_and_sings(char *str, int *ptr_i)
{
	int	i;
	int	sing;

	i = 0;
	sing = 1;
	while (str[i] != '0')
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
	*ptr_i = i;
	return (sing);
}

int	ft_convert_str_in_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	check_base;
	int	sing;
	int	i;
	int	nb;
	int	nb2;

	i = 0;
	nb = 0;
	check_base = ft_check_base(base);
	if (check_base == 0)
	{
		sing = ft_spaces_and_sings(str, &i);
		nb2 = ft_convert_str_in_base(str[i], base);
		while (nb != -1)
		{
			nb = (nb * check_base) + nb2;
			i++;
			nb2 = ft_convert_str_in_base(str[i], base);
		}
		return (nb *= sing);
	}	
	return (0);
}

int	main()
{
	printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
	printf("%d\n", ft_atoi_base("	     ---101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
	return (0);
}
