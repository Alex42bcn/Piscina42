#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	main()
{
	char	str[5] = "aBD:C";
	printf(":%s:\n", str);
	printf(":%s:\n", ft_strlowcase(str));

	return (0);
}
