#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int	main()
{
	char	s1[] = "gtg";
	char	s2[] = "gtg";
	printf("El valor de la comparacion: %d\n", ft_strcmp(s1, s2));

	char	s3[] = "gfz";
	char	s4[] = "gfg";
	printf("El valor de la comparacion: %d\n", ft_strcmp(s3, s4));

	char	s5[] = "bfb";
	char	s6[] = "gfg";
	printf("El valor de la comparacion: %d\n", ft_strcmp(s5, s6));

	return (0);
} 
