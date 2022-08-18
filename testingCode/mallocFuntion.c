#include <stdlib.h>
#include <stdio.h>
const int SIZE = 10;
int main()
{
    int *ptr = (int *)malloc(SIZE * sizeof(int));
    for (int i = 0; i < SIZE; i++)
    {
        *(ptr + i) = (i + 1);
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("ptr=%p\n", ptr);
        printf("*ptr=%d\n", *ptr);
        ptr++;
    }
    return 0;
}
