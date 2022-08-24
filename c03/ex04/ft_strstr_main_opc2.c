#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len_to_find;
	char	ptr[] = "";

	i = 0;
	j = 0;
	len_to_find = ft_strlen(to_find);
	if(len_to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		while  (str[i + j] == to_find[j] && str[i + j] != '\0' && j < len_to_find)
		{
			ptr[j] = str[i + j];
			j++;
		}
		if (ft_strlen(ptr) != len_to_find)
		{
			j = 0;
			ptr[j] = '\0';
			continue ;
		}
		else
			while (str[i+j]	!= '\0')
			{
				ptr[i + j] = str[i + j];
				i++;
			}
			return (ptr);
		i++;
	}
	return (NULL);
}

int	main()
{
	char haystack[] = "TutorialsPoint y sol";
	char needle[] = "Point";
	// char *ret;
	
	//ret = ft_strstr(haystack, needle);
	printf("The substring is: %s\n", ft_strstr(haystack, needle));

	return(0);
}
