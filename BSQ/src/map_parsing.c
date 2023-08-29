/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:53:55 by ybarbot           #+#    #+#             */
/*   Updated: 2023/08/02 20:21:54 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*file_to_buff(char *file_name)
{
	char	buff_size;
	char	*buff_content;
	int		file;
	int		i;

	file = open(file_name, O_RDONLY);
	if (file == (-1))
		return ("map error\n");
	i = 0;
	while (read(file, &buff_size, 1) != 0)
		i++;
	close(file);
	buff_content = malloc(sizeof(char) * i);
	if (buff_content == NULL)
		return (NULL);
	file = open(file_name, O_RDONLY);
	i = 0;
	while (read(file, &buff_size, 1) != 0)
	{
		buff_content[i] = buff_size;
		i++;
	}
	close(file);
	buff_content[i] = '\0';
	return (buff_content);
}

char	**fill_map_lines(int count_lines, char **map_line_tab, char *full_map)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < count_lines)
	{
		j = 0;
		while (full_map[k] && full_map[k] != '\n')
		{
			map_line_tab[i][j] = full_map[k];
			k++;
			if (full_map[j])
				j++;
		}
		k++;
		i++;
	}
	return (map_line_tab);
}

char	**malloc_map_lines(int count_lines, char **map_line_tab, char *full_map)
{
	int	i;
	int	j;
	int	content_line_count;

	i = 0;
	j = 0;
	while (i < count_lines)
	{
		content_line_count = 0;
		while (full_map[j] && full_map[j] != '\n')
		{
			content_line_count++;
			if (full_map[j])
				j++;
		}
		map_line_tab[i] = malloc ((content_line_count + 1) * sizeof(char));
		if (map_line_tab[i] == NULL)
			return (NULL);
		map_line_tab[i][content_line_count] = '\0';
		i++;
	}
	map_line_tab = fill_map_lines(count_lines, map_line_tab, full_map);
	return (map_line_tab);
}

char	**parse_map_line(char *full_map)
{
	int		i;
	int		count_lines;
	char	**map_line_tab;

	i = -1;
	count_lines = 0;
	while (full_map[++i])
	{
		if (full_map[i] == '\n')
			count_lines++;
	}
	count_lines++;
	map_line_tab = malloc((count_lines + 1) * sizeof(char *));
	if (map_line_tab == NULL)
		return (NULL);
	map_line_tab = malloc_map_lines(count_lines, map_line_tab, full_map);
	return (map_line_tab);
}
