#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

int main()
{

	char	octo[] = "El octo ha sido secuestrado";
	printf("Lenght is: %d\n", ft_strlen(octo));

	return (0);
}
