#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main()
{
	char src[] = "helloWorld1";
	char dest[5] = ".....";
	printf(":%s:\n", src);
	printf(":%s:\n", dest);
	ft_strncpy(dest, src,  2);
	printf(":%s:\n", dest);

	return (0);
}
