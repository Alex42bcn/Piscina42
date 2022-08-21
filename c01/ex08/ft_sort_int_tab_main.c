#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	while (size >= 0)
	{
		i = 0;
		while (i < (size -1))
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}

int main()
{
	int     tab [] = {3,4,2,5,1};
	int     size = 5;

	ft_sort_int_tab(tab, size);
	
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);

	return (0);
}
