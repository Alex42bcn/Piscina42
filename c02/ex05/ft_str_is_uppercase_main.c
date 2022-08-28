/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:39:22 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/28 14:40:14 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
		if (str[i] >= 65 && str[i] <= 90)
			i++;
	else
		return (0);
	return (1);
}

int main()
{
	char str[5] = "ASDEZ";
	printf(":%s:\n", str);
	printf("%d\n", ft_str_is_uppercase(str));

	return (1);
}
