#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
		if (str[i] >= 33 && str[i] <= 126)
		i++;
	else
		return (0);
	return (1);
}

int	main()
{
	char	str_n[5] = "\n\t\v";
	//char    str_y[5] = "123sd";
	printf(":%s:\n", str_n);
	printf("%d\n", ft_str_is_printable(str_n));

	return (0);
}
