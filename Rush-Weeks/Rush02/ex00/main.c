/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:41:03 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/30 20:15:23 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char **key;
		char **value;

		dynamic_array(&key, &value);
		//char	*convertToWords(int n, char *out);

		printf("%s\t%s", key[30],value[30]);
		free(key);
		free(value);
	}
	return (0);
}