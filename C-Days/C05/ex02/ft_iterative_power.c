/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:08:55 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/22 08:10:47 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	number;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	number = nb;
	i = 1;
	while (i < power)
	{
		nb = nb * number;
		i++;
	}
	return (nb);
}
