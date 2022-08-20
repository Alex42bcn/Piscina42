#include<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int	*ptr;
	int	number;

	ptr = &number;
	ft_ft(ptr);
	printf("%p\n", ptr);
	printf("%d\n", *ptr);
	printf("%d\n", number);
	return (0);
}
