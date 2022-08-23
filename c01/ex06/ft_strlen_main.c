#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i_count;

	i_count = 0;
	while (str[i_count] != '\0')
	{
		i_count ++;
	}
	return (i_count);
}

int	main()
{

	char *str;

	str = "hello_";
	//ft_strlen(str);
	printf("%d\n", ft_strlen(str));

	return (0);
}
