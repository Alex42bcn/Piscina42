#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
int main()
{
	ft_putchar('\\');
	ft_putchar('\n');
	ft_putchar("0123456789abcdef" [ 10 / 16]);
	ft_putchar('\n');
	ft_putchar("0123456789abcdef" [10 % 16]);
	ft_putchar('\n');

	return(0);
}
