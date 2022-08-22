#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	return (dest);

}

int	main()
{
	char	src[] = "hello_test";
	char	dest[] = "";
	printf(":%s:\n", dest);
	ft_strcpy(dest,src);
	printf(":%s:\n", dest);

	return (0);
}
