/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_malloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:34:24 by ybarbot           #+#    #+#             */
/*   Updated: 2023/08/02 20:21:26 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	free_malloc(char **map_lines, char*file_content)
{
	int	i;

	i = -1;
	while (map_lines[++i])
		free(map_lines[i]);
	free(map_lines);
	free(file_content);
}
