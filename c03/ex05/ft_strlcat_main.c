/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:07:20 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/31 14:26:58 by apicanyo         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = ft_strlen(dest);
	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > 1)
		return (src_len + size);
	while (src[j] && i < size -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < dest_len)
		return (src_len + size);
	else
		return (dest_len + src_len);
}

int	main(void)
{
	/*char	first[] = "This is ";
	char	last[] = "a potentially long string";
	unsigned int	r;
	unsigned int	size;
	
	size = 15;
	//r = ft_strlcat(first,last,size);
	printf("Lenght first str = %d\n", ft_strlen(first));
	printf("Lenght last str = %d\n", ft_strlen(last));
	r = ft_strlcat(first,last,size);

	printf("Value returned: %d\n",r);

	printf("%s\n", first);*/
	char src[25] = "a potencially long string";
	char dest [50] = "This is ";
	//printf("%i \n", ft_strlcat(dest, src, 35));
	strlcat(dest, src, 34);
	printf("%s \n", dest);
	return (0);
}
