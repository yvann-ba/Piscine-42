/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:00:34 by lauger            #+#    #+#             */
/*   Updated: 2023/08/02 20:21:46 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

t_ground	*ft_init_struct(t_ground *var, char empt, \
				char obs, char fill)
{
	var->empty = empt;
	var->obstacle = obs;
	var->filled = fill;
	return (var);
}

t_ground	*ft_re_init_struct(t_ground *var, int height, int width)
{
	var->height = height;
	var->width = width;
	return (var);
}
