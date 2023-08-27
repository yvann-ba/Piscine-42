/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:17:07 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/24 19:02:58 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nb_tmp;

	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	nb_tmp = nb;
	while (nb_tmp > 1)
	{
		nb = nb * (nb_tmp - 1);
		nb_tmp--;
	}
	return (nb);
}
