/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:05:08 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/19 17:56:07 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
