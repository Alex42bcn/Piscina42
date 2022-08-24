#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int	dest_len;
	int	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (i < nb)
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest);
}

int	main()
{
	char	src[] = "Benguerir";
	char	dest[] = "1337 ";
	printf("%s", ft_strncat(dest, src, 3));
}
