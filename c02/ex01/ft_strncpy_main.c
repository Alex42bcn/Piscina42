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
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main()
{
	char src[] = "abc";
	char dest[] = "chararray";
	printf(":%s:\n", src);
	printf(":%s:\n", dest);
	//ft_strncpy(dest, src, 6);
	printf(":%s:\n", ft_strncpy(dest, src, 2));

	return (0);
}
