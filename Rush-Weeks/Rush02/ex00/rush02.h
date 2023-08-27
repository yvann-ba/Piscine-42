/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:01:47 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/30 19:45:07 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
#include <stdio.h>

char *file_to_buff();
char	*convertToWords(int n, char *out);
int dynamic_array(char ***key, char ***value);

typedef struct s_dictionary {
	int **key;
	char **value;
}	t_dictionary;

struct s_dictionary *fill_struct(int size, char **value, char **key);

#endif