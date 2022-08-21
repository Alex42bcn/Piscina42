#include<stdio.h>
#include<unistd.h>

int	main()
{
	char	*str;
	str = "lol"; //el valor lol queda com una constant, per aixo  o es podra mai cambiar els valor del string.

	write (1, &str[0], 1);
	write (1, &str[1], 1);
	//write (1, &str+2, 1);
	//write (1, &str+3, 1);
	//write (1, &str+4, 1);
	//write (1, &str+5, 1);

	printf("\n");

	printf("El valor string :%s\n", str);
	//printf("El valor a q apunta el puntero es:%c\n", *str);

	//printf("El valor del punter es::%p\n", str);

	printf("El valor puntero de &str es:%p\n", &str);
	
	printf("El valor puntero de *str es:%c\n", *str);
	return (0);
}
