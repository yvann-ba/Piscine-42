/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:19:52 by ybarbot           #+#    #+#             */
/*   Updated: 2023/08/02 20:15:47 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_ground
{
	char	empty;
	char	obstacle;
	char	filled;
	int		height;
	int		width;
}	t_ground;

typedef struct s_sqr
{
	int		x;
	int		y;
	int		size;
}	t_sqr;

t_ground	*ft_init_struct(t_ground *var, char empt, \
				char obs, char fill);
t_ground	*ft_re_init_struct(t_ground *var, int height, int width);
char		*file_to_buff(char *file_name);
char		**parse_map_line(char *full_map);
char		**malloc_map_lines(int count_lines, \
				char **map_line_tab, char *full_map);
char		**fill_map_lines(int count_lines, \
				char **map_line_tab, char *full_map);
int			check_line_length(char **map_lines);
int			ft_strlen(char *str);
int			ft_algo(t_ground *ground, t_sqr *val, char **tab);
int			lines_info(char **map_lines);
int			index_lines(char **map_lines);
void		free_malloc(char **map_lines, char*file_content);
int			ft_find_square(t_ground *var, char **tab, int col, int row);

#endif
