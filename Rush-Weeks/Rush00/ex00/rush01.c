/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:21:01 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/15 14:33:12 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_top_line(int x)
{	
	int	i;

	i = 1;
	ft_putchar('/');
	while (i < x - 1 && x != 1)
	{
		ft_putchar('*');
		i++;
	}
	if (i == x - 1 && x != 1)
		ft_putchar('\\');
}

void	ft_bottom_line(int x)
{
	int	i;

	i = 1;
	ft_putchar('\\');
	while (i < x - 1 && x != 1)
	{
		ft_putchar('*');
		i++;
	}
	if (i == x - 1 && x != 1)
		ft_putchar('/');
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
			ft_putchar('*');
			j = 0;
			while (j < x - 2)
			{
				ft_putchar(' ');
				j++;
			}
			if (x != 1)
				ft_putchar('*');
		}
		if (i == y && y != 1)
			ft_bottom_line(x);
		ft_putchar('\n');
		i++;
	}
}
