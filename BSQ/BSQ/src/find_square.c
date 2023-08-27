/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:37:16 by lauger            #+#    #+#             */
/*   Updated: 2023/08/02 20:23:34 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "../includes/bsq.h"

int	ft_check_row(t_ground *var, char **tab, int col, int n)
{
	int		y;
	int		x;

	y = 0;
	while (y < col)
	{
		x = 0;
		while (x < n)
		{	
			if (tab[y][x] == var->obstacle)
				return (1);
			x++;
		}
		y++;
	}
	return (0);
}

int	ft_check_col(t_ground *var, char **tab, int raw, int n)
{
	int 	y;
	int 	x;

	y = 0;
	while (x < raw)
	{
		y = 0;
		while (y < n)
		{
			if (tab[y][x] == var->obstacle)
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}

int	ft_find_square(t_ground *var, char **tab, int col, int row)
{
	int		x;
	int		y;
	int		size;
	int		n;

	x = 0;
	y = 0;
	size = 0;
	n = 1;
	while (x < row && y < col)
	{
		if (ft_check_col(&var, &val, tab, row, col, n) == 1 \
				&& ft_check_row(&var, tab, row, col, n) == 1)
		{
			if (x > val->size)
			{
				val->size = x;
				val->x = x - (x + 1);
				val->y = y - (y + 1);
			}
			y = 0;
			x++;
		}
		n++;
		x++;
		y++;
	}
}

void	main(void)
{
	int			n;
	t_ground	*var;
	t_sqrt		*val;

	n = 0;
	ft_init_struct(&var, ".", "o", "x");
	ft_init_sqrt(&val, 1, 1, 1);
	ft_find_square(var, val, tab, col, row, n);
}
*/