/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:00:39 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/28 14:00:44 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i_count;

	i_count = 0;
	while (str[i_count] != '\0')
	{
		i_count ++;
	}
	return (i_count);
}

int	main()
{

	char *str;

	str = "hello_";
	//ft_strlen(str);
	printf("%d\n", ft_strlen(str));

	return (0);
}
