/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:04:30 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/31 14:00:56 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			j = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					j = 1;
				i++;
			}
			if (j == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

int	main(void)
{
	char	haystack[] = "TutorialsPoint y sol";
	char	needle[] = "Point";
	char	*ret;
	ret = ft_strstr(haystack, needle);
	//printf("The substring is: %s", ft_strstr(haystack, needle));
	printf("The substring is:%s", strstr(haystack, needle));
	return (0);
}
