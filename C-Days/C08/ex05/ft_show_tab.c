/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:12:16 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/27 19:20:43 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	unsigned_nb(unsigned int nb)
{
	char	toprint;

	toprint = nb % 10 + 48;
	nb = nb / 10;
	if (nb)
		unsigned_nb(nb);
	write(1, &toprint, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	p;

	if (nb < 0)
	{
		write(1, "-", 1);
		p = -nb;
	}
	else
		p = nb;
	unsigned_nb(p);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
