#include<stdio.h>

int	main()
{
	char	str[30] = "alto y bajo	es Todo, % $fsd";
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		printf("El numero ascci es: %d.", str[i]);
		printf(" El caracter ascci es:  %c\n", str[i]);
		i++;
	}
	return (0);
}
