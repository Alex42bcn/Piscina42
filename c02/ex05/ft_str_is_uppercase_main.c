#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
		if (str[i] >= 65 && str[i] <= 90)
			i++;
	else
		return (0);
	return (1);
}

int main()
{
	char str[5] = "ASDEZ";
	printf(":%s:\n", str);
	printf("%d\n", ft_str_is_uppercase(str));

	return (1);
}
