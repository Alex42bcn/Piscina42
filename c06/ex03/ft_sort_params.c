/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:50:00 by apicanyo          #+#    #+#             */
/*   Updated: 2022/09/01 17:19:35 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i ++;
	}
}

void	ft_swap(int*a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(const char *s1, const  char *s2)
{
	int	i;
	int	value;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			value = s1[i] - s2[i];
			return (value);
			break ;
		}		
		i++;
	}
	return (0);
}

int		main(int ac, const char **av)
{
	int num;
	int i;
	int j;
	int a[ac];

	num = 1;
	i = 1;
	while (num < ac)
	{
		a[num] = num;
		num++;
	}
	while (i < ac)
	{
		j = i;
		while (j < ac)
		{
			if (ft_strcmp(av[a[i]], av[a[j]]) > 0)
				ft_swap(&a[i], &a[j]);
			j++;
		}
		ft_putstr(av[a[i++]]);
		write(1, "\n", 1);
	}
	return (0);
}
