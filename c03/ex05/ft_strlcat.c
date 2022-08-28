/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:07:20 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/28 16:09:19 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dstsize;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	dstsize = dest_len + src_len;
	i = dest_len;
	j = 0;
	if (size == 0 || size <= dest_len)
		return (dstsize);
	while (j < (size - dest_len - 1) && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dstsize);
}

/*int	main()
{
	//char	first[] = "This is ";
	char	last[] = "a potentially long string";
	unsigned int	r;
	unsigned int	size;
	
	size = 15;
	//r = ft_strlcat(first,last,size);
	printf("Lenght first str = %d\n", ft_strlen(first));
	printf("Lenght last str = %d\n", ft_strlen(last));
	r = ft_strlcat(first,last,size);

	printf("Value returned: %d\n",r);

	printf("%s\n", first);//

	char src[] = "a potencially long string";
	char dest [] = "This is ";
	printf("%i \n", ft_strlcat(dest, src, 35));
	printf("%s \n", dest);
	return (0);
}*/
