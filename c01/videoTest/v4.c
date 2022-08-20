#include<stdio.h>

int	main()
{
	int a;
	int *ptr;
	ptr = &a;
	
	printf("%p\n", ptr);
	//printf("%p\n", ptr+1);
	printf("%p\n", ptr+8);

	return(0);
}
