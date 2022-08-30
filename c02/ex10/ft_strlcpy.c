/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:08:59 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/29 21:09:24 by apicanyo         ###   ########.fr       */
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

/*int	main(void)
{
	char	src[] = "Holland";
	char	dest[] = "worz12346";

	printf(":%s:\n", src);
	printf(":%s:\n", dest);
	printf(":%d:\n", ft_strlcpy(dest, src, 3));
	printf(":%s:\n", dest);
	return (0);
}*/
