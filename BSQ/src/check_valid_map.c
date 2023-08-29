/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:18:21 by ybarbot           #+#    #+#             */
/*   Updated: 2023/08/02 20:21:11 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_line_length(char **map_lines)
{
	int	i;
	int	j;

	i = 1;
	while (map_lines[i])
	{
		j = i + 1;
		while (map_lines[j])
		{
			if (ft_strlen(map_lines[i]) != ft_strlen(map_lines[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	lines_info(char **map_lines)
{
	int	i;
	int	tab_len;

	i = 0;
	tab_len = 0;
	while (map_lines[0][i] >= '0' && map_lines[0][i] <= '9')
	{
		tab_len = (tab_len * 10) + (map_lines[0][i] - 48);
		i++;
	}	
	return (tab_len);
}

int	index_lines(char **map_lines)
{
	int	i;

	i = 0;
	while (map_lines[0][i] >= '0' && map_lines[0][i] <= '9')
		i++;
	return (i);
}
