#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

int	main()
{
	char str[5] = "qq!e";
	printf(":%s:\n", str);
	printf("%d\n", ft_str_is_alpha(str));

	return (0);
}
