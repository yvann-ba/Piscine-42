/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:45:27 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/14 19:48:39 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write_numbers(int first, int second)
{
	write(1, &(char){first / 10 + 48}, 1);
	write(1, &(char){first % 10 + 48}, 1);
	write(1, " ", 1);
	write(1, &(char){second / 10 + 48}, 1);
	write(1, &(char){second % 10 + 48}, 1);
	if (first != 98 || second != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_write_numbers(first, second);
			second++;
		}
		first++;
	}
}
