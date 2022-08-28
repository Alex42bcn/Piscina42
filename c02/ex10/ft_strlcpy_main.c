/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:51 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/28 14:53:56 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i_count;

	i_count = 0;
	while (str[i_count] != '\0')
		i_count ++;
	return (i_count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size -1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (src_len);
}

int	main()
{
	char	src[] = "Holland";
	char	dest[] = "worz12346";
	printf(":%s:\n", src);
	printf(":%s:\n", dest);
	printf(":%d:\n", ft_strlcpy(dest, src, 3));
	printf(":%s:\n", dest);

	return (0);
}
