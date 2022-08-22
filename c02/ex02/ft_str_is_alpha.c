#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count_no_alpha;
	char	aux;

	count_no_alpha = 0;
	i = 0;
	while (str[i] != '\0')
	{
		aux = str[i];
		if (!(((aux >= 'A') && (aux <= 'Z')) || ((aux >= 'a') && (aux <= 'z'))))
			count_no_alpha++;
		i++;
	}
	if (count_no_alpha == 0 || i == 0)
		return (1);
	else
		return (0);
}

int	main()
{
	char str[5] = "as2Sk";
	printf(":%s:\n", str);
	printf("%d\n", ft_str_is_alpha(str));

	return (0);
}
