/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:55:52 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/30 03:32:11 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;
	int	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (i < src_len)
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest);
}

int	main(void)
{
	char	src[50] = "Benguerir";
	char	dest[50] = "1337 ";
	printf("%s\n", ft_strcat(dest, src));
	strcat(dest, src);
	printf("Final destination string : |%s|", dest);
	strcat(dest, src);
	printf("Final destination string : |%s|", dest);	
	return (0);
}
