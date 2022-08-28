/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:41:34 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/28 14:41:37 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	char	str_n[5] = "\n\tww";
	//char    str_y[5] = "123sd";
	printf(":%s:\n", str_n);
	printf("%d\n", ft_str_is_printable(str_n));

	return (0);
}
