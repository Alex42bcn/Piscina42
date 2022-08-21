#include<stdio.h>

int	main()
{
	int a;
	int *ptr;
	ptr = &a;
	//a = 101;
	
	printf("%p\n", ptr);
	//printf("%p\n", ptr+1);
	printf("%p\n", ptr+8);

	printf("%d\n", *ptr);

	return(0);
}
