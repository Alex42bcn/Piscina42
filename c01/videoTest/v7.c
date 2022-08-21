#include<stdio.h>
#include<unistd.h>

int	main()
{
	char	c;
	c = '\0';

	write (1, &c, 1);
	printf("\n");

	printf("El valor numerico es:%d\n", c);
	printf("El valor char es:%c\n", c);
	printf("El valor memoria de c es:%p\n", &c);


	return (0);
}
