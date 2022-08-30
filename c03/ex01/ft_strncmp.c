/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:59:57 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/30 11:00:55 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[] = "gtg9sde";
	char	s2[] = "gtg2sed";
	printf("El valor de la comparacion: %d\n", ft_strncmp(s1, s2, 4));
	printf("El valor de la comparacion: %d\n", strncmp(s1, s2, 4));
	char	s3[] = "gfzsde";
	char	s4[] = "gfgsde";
	printf("El valor de la comparacion: %d\n", ft_strncmp(s3, s4, 4));
	printf("El valor de la comparacion: %d\n", strncmp(s3, s4, 4));
	char	s5[] = "bfbsed";
	char	s6[] = "gfgsed";
	printf("El valor de la comparacion: %d\n", ft_strncmp(s5, s6, 4));
	printf("El valor de la comparacion: %d\n", strncmp(s5, s6, 4));
	char    s7[] = "bfbsed";
   	char    s8[] = "bfbsed";
   	printf("El valor de la comparacion: %d\n", ft_strncmp(s7, s8, 4));
	printf("El valor de la comparacion: %d\n", strncmp(s7, s8, 4));
	return (0);
}*/
