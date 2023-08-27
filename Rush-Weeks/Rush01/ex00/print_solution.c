/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomoron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:20:15 by tomoron           #+#    #+#             */
/*   Updated: 2023/07/23 12:22:53 by tomoron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_solution(int *array, int array_size)
{
	int	i;

	i = 0;
	while (i < (array_size * array_size))
	{
		write (1, &(char){array[i] + 48}, 1);
		if (i % array_size < array_size - 1)
		{
			write (1, " ", 1);
		}
		if (i % array_size == array_size -1)
		{
			write(1, "\n", 1);
 		}
		i++;
    }
}
