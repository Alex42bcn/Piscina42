/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:05:37 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/13 20:52:41 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_body(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	ft_putchar('\n');
	while (i < (y - 2))
	{
		j = 0;
		while (j < x)
		{
			if (j == 0)
				ft_putchar('B');
			else if (j == (x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	print_top_bot(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == (x - 1))
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

int	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (84);
	print_top_bot(x);
	if (x != 1 && y != 1)
		print_body(x, y);
	if (y != 1)
		print_top_bot(x);
	return (0);
}
