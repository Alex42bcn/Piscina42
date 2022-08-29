/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:30:56 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/29 19:11:46 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	str_n[7] = "\n\tww";
	char	str_y[7] = "123sd";

	printf(":%s:\n", str_n);
	printf("%d\n", ft_str_is_printable(str_n));
	printf(":%s:\n", str_y);
	printf("%d\n", ft_str_is_printable(str_y));
	return (0);
}
