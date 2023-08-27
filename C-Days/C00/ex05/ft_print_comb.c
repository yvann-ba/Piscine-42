/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:43:57 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/13 08:21:36 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	write_numbers(char hundred, char tens, char digit)
{
	write(1, &hundred, 1);
	write(1, &tens, 1);
	write(1, &digit, 1);
	if (hundred != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	hundred;
	char	tens;
	char	digit;

	hundred = '0';
	while (hundred <= '7')
	{
		tens = hundred + 1;
		while (tens <= '8')
		{
			digit = tens + 1;
			while (digit <= '9')
			{
				write_numbers(hundred, tens, digit);
				digit++;
			}
			tens++;
		}
		hundred++;
	}
}
