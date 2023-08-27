/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_solution.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomoron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:00:02 by tomoron           #+#    #+#             */
/*   Updated: 2023/07/23 12:17:34 by tomoron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//valeur de retour : nombre de solutions
#include <stdio.h>
#include <unistd.h>

int		ft_check_line(int *input, int *result, int index, int size);
int		ft_check_borders(int *input, int *res, int index, int size);
int		ft_check_duplicates(int *array, int index, int array_size);
void	print_solution(int *array, int array_size);

int	ft_search_solution(int *arr_input, int *res, int arr_s, int recurs_i)
{
	int	current_test;
	int	found;

	current_test = 1;
	found = 0;
	while (current_test <= arr_s && !found)
	{
		res[recurs_i] = current_test;
		if (ft_check_duplicates(res, recurs_i, arr_s)
			&& ft_check_borders(arr_input, res, recurs_i, arr_s))
		{
			if ((recurs_i % arr_s) == (arr_s - 1) && !ft_check_line(arr_input, \
				res, recurs_i - (arr_s -1), arr_s))
				return (found);
			if (recurs_i == (arr_s * arr_s) - 1)
			{
				print_solution(res, arr_s);
				return (1);
			}
			found = ft_search_solution(arr_input, res, arr_s, \
				recurs_i + 1);
		}
		current_test++;
	}
	return (found);
}
