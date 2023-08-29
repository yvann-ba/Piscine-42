/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 08:21:38 by ybarbot           #+#    #+#             */
/*   Updated: 2023/08/02 20:37:10 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_parse(char ***map_lines, t_ground *map_info, char *file)
{
	int		j;
	char	*file_content;

	j = 0;
	file_content = file_to_buff(file);
	*map_lines = parse_map_line(file_content);
	if (check_line_length(*map_lines))
	{
		while ((*map_lines)[1][j])
			j++;
		ft_init_struct(map_info, index_lines((*map_lines)) + 1 \
				, index_lines((*map_lines)) + 2, index_lines((*map_lines)) + 3);
		ft_re_init_struct(map_info, lines_info((*map_lines)), \
				ft_strlen((*map_lines)[1]));
	}
	free_malloc((*map_lines), file_content);
	return (0);
}

void	ft_print(char **tab, t_ground *map)
{
	int	i;

	i = 0;
	while (i < map->height)
	{
		write(1, tab[i], map->width);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_fill(t_ground *map_info, char **tab, t_sqr sol)
{
	int	x;
	int	y;

	y = sol.y;
	while (y < sol.y + sol.size)
	{
		x = sol.x;
		while (x < sol.x + sol.size)
		{
			tab[y][x] = map_info->filled;
			x++;
		}
		y++;
	}
}

int	main(int argc, char **argv)
{
	int			i;
	char		**map_lines;
	t_ground	map_info;
	t_sqr		sol;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_parse(&map_lines, &map_info, argv[i]);
			map_info.height--;
			ft_algo(&map_info, &sol, map_lines + 1);
			ft_fill(&map_info, map_lines + 1, sol);
			ft_print(map_lines + 1, &map_info);
			i++;
		}
	}
	return (0);
}
