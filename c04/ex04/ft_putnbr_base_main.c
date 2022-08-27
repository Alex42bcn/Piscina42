#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;
	int	lenstr;

	i = 0;
	lenstr = ft_strlen(str);
	if (lenstr == 0 || lenstr == 1)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] <= 32 || str[i] == 127)
			return (1);
		j = i + 1;
		while (j < lenstr)
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = ft_strlen(base);
	if (ft_check_base(base) == 0)
	{
		if (nbr < 0)
		{
			nbr *= -1;
			ft_putchar('-');
		}
		if (nbr < len_base)
			ft_putchar(base[nbr]);
		if (nbr >= len_base)
		{
			ft_putnbr_base((nbr / len_base), base);
			ft_putnbr_base((nbr % len_base), base);
		}
	}
}

int	main()
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
	return (0);
}
