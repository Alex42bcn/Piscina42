#include<stdio.h>

int	main()
{
int i = 1;
int *i_ptr = &i;

printf("i=%d\n", i);
printf("i_ptr=%p\n", i_ptr);
printf("*i_ptr=%d\n", *i_ptr);

return (0);

}
