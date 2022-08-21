#include<stdio.h>
#include<unistd.h>  //use it for write

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i ++;
	}
}

int	main()
{
	char	*str;
	str = "1234abc";
	ft_putstr(str);	

	return (0);
}
