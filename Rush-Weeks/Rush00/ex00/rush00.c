/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:02:07 by nrontey           #+#    #+#             */
/*   Updated: 2023/07/15 14:33:25 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_top_line(int x)
{	
	int	i;

	i = 1;
	ft_putchar('o');
	while (i < x - 1 && x != 1)
	{
		ft_putchar('-');
		i++;
	}
	if (i == x - 1 && x != 1)
		ft_putchar('o');
}

void	ft_bottom_line(int x)
{
	int	i;

	i = 1;
	ft_putchar('o');
	while (i < x - 1 && x != 1)
	{
		ft_putchar('-');
		i++;
	}
	if (i == x - 1 && x != 1)
		ft_putchar('o');
}

void	rush(int x, int y)
{	
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			ft_top_line(x);
		if (i > 1 && i < y)
		{
			ft_putchar('|');
			j = 0;
			while (j < x - 2)
			{
				ft_putchar(' ');
				j++;
			}
			if (x != 1)
				ft_putchar('|');
		}
		if (i == y && y != 1)
			ft_bottom_line(x);
		ft_putchar('\n');
		i++;
	}
}
