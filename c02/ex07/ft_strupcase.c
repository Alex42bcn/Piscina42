#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
	i++;
	}
	return (str);
}

int main ()
{
	char	str[5] = "1acB_";
	printf(":%s:\n", str);
	printf(":%s:\n", ft_strupcase(str));
	return (0);
}
