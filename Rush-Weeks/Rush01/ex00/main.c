/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomoron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:02:54 by tomoron           #+#    #+#             */
/*   Updated: 2023/07/23 12:38:51 by tomoron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_search_solution(int *arr_input, int *res, int arr_s, int recurs_i);

int	ft_check_n(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			count++;
		i++;
	}
	if (count % 4 != 0)
		return (0);
	return (count / 4);
}

int	*ft_parse(char *input, int arr_size)
{
	int	*arr_numbers;
	int	str_i;
	int	arr_i;

	arr_numbers = malloc((arr_size * 4) * sizeof(int));
	str_i = 0;
	arr_i = 0;
	while (input[str_i] != '\0')
	{
		if (input[str_i] >= '1' && input[str_i] <= ('0' + arr_size)
			&& (str_i % 2) == 0 && arr_i < (arr_size * 4))
		{
				arr_numbers[arr_i] = input[str_i] - '0';
				str_i++;
				arr_i++;
		}
		else if (input[str_i] == ' ' && (str_i % 2) == 1
			&& arr_i < (arr_size * 4))
			str_i++;
		else
			return (0);
	}
	if (arr_i != (arr_size * 4))
		return (0);
	return (arr_numbers);
}

int	main(int argc, char *argv[])
{
	int	*arr_input;
	int	arr_size;
	int	*res;

	if (argc == 2)
	{
		arr_size = ft_check_n(argv[1]);
		if (!arr_size)
			return (0);
		res = malloc((arr_size * arr_size) * sizeof(int));
		arr_input = ft_parse(argv[1], arr_size);
		if (!arr_input)
			return (0);
		ft_search_solution(arr_input, res, arr_size, 0);
		free(res);
		free(arr_input);
	}
}
