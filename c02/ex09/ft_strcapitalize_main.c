/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_main.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:50:42 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/28 14:50:44 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (check == 1)
				str[i] = str[i] - 32;
				check = 0;
		}
		else if (str[i] >= 48 && str[i] <= 57)
			check = 0;
		else
			check = 1;
		i++;
	}
	return (str);
}

int	main()
{
	char	str[100] = "salut, commi9tment :to %van? 42minut alex";
	printf(":%s:\n", str);
	printf(":%s:\n", ft_strcapitalize(str));

	return (0);
}
