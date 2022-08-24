#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;
	int	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= dest_len + src_len)
	{
		while (i < src_len)
		{
			dest[i + dest_len] = src[i];
			i++;
		}
	}
	return (dest);
}

int	main()
{
	char	src[] = "Benguerir";
	char	dest[20] = "1337          ";
	printf("%s", ft_strcat(dest, src));
}
