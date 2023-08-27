/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:08:28 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/26 15:44:49 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_diff;
	int	j;

	range_diff = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(range_diff * sizeof(int));
	if (*range == NULL)
		return (-1);
	j = 0;
	while (min < max)
	{
		(*range)[j] = min;
		min++;
		j++;
	}
	return (range_diff);
}
