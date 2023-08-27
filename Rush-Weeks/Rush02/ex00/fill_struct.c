/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:25:06 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/30 19:48:44 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
/*
struct s_dictionary *fill_struct(int size, char **value, char **key)
{
	int i;
	
	t_dictionary *fill_dictionary;
	fill_dictionary = malloc ((size + 1) * sizeof(t_dictionary));
	if (fill_dictionary == NULL)
		return (NULL);
	i = 0;
	while(i < size)
	{
		fill_dictionary[i].value = value[i]; 
		fill_dictionary[i].key = key[i]; 
		i++;
	}
	fill_dictionary[size].value = NULL;
	fill_dictionary[size].key = NULL;
	return (fill_dictionary);
}
*/
/*
int main()
{

	int size = 13;
	char *value[13] = {"0", "1", "2","3", "4", "5", "6", "7", "8","9","10","11","12"};
	char *key[13] = {"zero", "one", "two", "three","four", "five", "six", "seven", "eight","nine","ten","eleven","twelve"};

	fill_struct(size, value, key);
	printf("%s", *fill_struct(size, value, key)[12].key);
	printf("%s", *fill_struct(size, value, key)[12].value);

}
*/
