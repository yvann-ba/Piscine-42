/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_column.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judetre <julien.detre.dev@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:28:19 by judetre           #+#    #+#             */
/*   Updated: 2023/07/23 12:24:01 by judetre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_check_column_to_under(int column_above_value, int *result, int index, int size)
{
	int	i;
	int	count;
	int	max;

	i = 1;
	count = 1;
	max = result[index];
	while (i < size)
	{
		if (max < result[index + size])
		{
			max = result[index + size];
			count++;
		}
		index += size;
		i++;
	}
	if (count == column_above_value)
		return (1);
	printf("erreur check to under\n");
	return (0);
}

int	ft_check_column_to_above(int column_under_value, int *result, int index, int size)
{
	int	i;
	int	count;
	int	max;

	i = 1;
	count = 1;
	index = index + size * (size - 1);
	max = result[index];
	while (i < size)
	{
		if (max < result[index - size])
		{
			max = result[index - size];
			count++;
		}
		index -= size;
		i++;
	}
	if (count == column_under_value)
		return (1);
	printf("erreur check to above\n");
	return (0);
}

int	ft_check_column(int *input, int *result, int index, int size)
{
	int	column_above_value;
	int	column_under_value;
	int	column;

	column = 0;
	if (index / size == size - 1)
	{
		while (column < size)
		{
			column_above_value = input[column];
			column_under_value = input[column + size];
			printf("%d\n%d\n%d\n", column, column_above_value, column_under_value);
			if (!ft_check_column_to_under(column_above_value, result, column, size) || !ft_check_column_to_above(column_under_value, result, column, size))
				return (0);
			column++;
		}
	}
	return (1);
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	int input[16] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2};
	int result[16] = {1,2,3,4,2,3,4,1,3,4,1,2,4,1,2,3};


	printf("%d" ,ft_check_column(input, result, 1, 4));
	return (0);
}*/
