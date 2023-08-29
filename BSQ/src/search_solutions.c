/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:44:59 by lauger            #+#    #+#             */
/*   Updated: 2023/08/02 20:21:34 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_verif(t_sqr pot, t_ground *ground, char **tab)
{
	int		x;
	int		y;

	y = pot.y;
	while (y < pot.y + pot.size + 1)
	{
		x = pot.x;
		while (x < pot.x + pot.size + 1)
		{
			if (x == pot.x + pot.size || y == pot.y + pot.size)
				if (tab[y][x] == ground->obstacle)
					return (0);
			x++;
		}
		y++;
	}
	return (1);
}

void	ft_update_sqr(t_sqr *sqr, int x, int y, int size)
{
	sqr->x = x;
	sqr->y = y;
	sqr->size = size;
}

int	ft_algo(t_ground *ground, t_sqr *val, char **tab)
{
	t_sqr	pot;

	ft_update_sqr(val, 0, 0, 0);
	ft_update_sqr(&pot, 0, 0, 0);
	while (pot.y < ground->height)
	{
		pot.x = 0;
		while (pot.x < ground->width)
		{
			if (tab[pot.y][pot.x] != ground->obstacle)
			{
				pot.size = 1;
				while (pot.x < ground->width - pot.size
					&& pot.y < ground->height - pot.size
					&& ft_verif(pot, ground, tab) == 1)
					pot.size++;
				if (pot.size > val->size)
					ft_update_sqr(val, pot.x, pot.y, pot.size);
			}
			pot.x++;
		}
		pot.y++;
	}
	return (0);
}
