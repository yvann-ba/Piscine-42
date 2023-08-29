/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sqr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:09:34 by lauger            #+#    #+#             */
/*   Updated: 2023/08/02 20:29:27 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

t_sqr	*ft_init_sqr(t_sqr *var, int x, int y, int size)
{
	var->x = x;
	var->y = y;
	var->size = size;
	return (var);
}
