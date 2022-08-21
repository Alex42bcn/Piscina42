#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i;
	int mid;

	i = 0;
	mid = size / 2;
	if (size % 2 == 0)
		mid --;

	while (i < mid)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}

}

int	main()
{
	int tab [] = {1,2,3,4,5,6};

	ft_rev_int_tab(tab, 5);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	
	return (0);
}
