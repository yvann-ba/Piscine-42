/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_borders.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomoron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 00:23:16 by tomoron           #+#    #+#             */
/*   Updated: 2023/07/23 12:17:07 by tomoron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_borders_line_over(int *input, int *res, int index, int size)
{
	if (index < size)
	{
		if (input[index] == 1 && res[index] != size)
			return (0);
		if (input[index] == size && res[index] != 1)
			return (0);
		if (res[index] == size && input[index] != 1)
			return (0);
	}
	return (1);
}

int	ft_check_borders_line_under(int *input, int *res, int index, int size)
{
	if ((index / size) == (size - 1))
	{
		if (input[size + (index % size)] == 1 && res[index] != size)
			return (0);
		if (input[size + (index % size)] == size && res[index] != 1)
			return (0);
		if (res[index] == size && input[size + (index % size)] != 1)
			return (0);
	}
	return (1);
}

int	ft_check_borders_column_left(int *input, int *res, int index, int size)
{
	if ((index % size) == 0)
	{
		if (input[(size * 2) + (index / size)] == 1 && res[index] != size)
			return (0);
		if (input[(size * 2) + (index / size)] == size && res[index] != 1)
			return (0);
		if (res[index] == size && input[(size * 2) + (index / size)] != 1)
			return (0);
	}
	return (1);
}

int	ft_check_borders_column_right(int *input, int *res, int index, int size)
{
	if ((index % size) == (size - 1))
	{
		if (input[(size * 3) + (index / size)] == 1 && res[index] != size)
			return (0);
		if (input[(size * 3) + (index / size)] == size && res[index] != 1)
			return (0);
		if (res[index] == size && input[(size * 3) + (index / size)] != 1)
			return (0);
	}
	return (1);
}

int	ft_check_borders(int *input, int *res, int index, int size)
{
	if (!ft_check_borders_line_over(input, res, index, size))
		return (0);
	if (!ft_check_borders_line_under(input, res, index, size))
		return (0);
	if (!ft_check_borders_column_left(input, res, index, size))
		return (0);
	if (!ft_check_borders_column_right(input, res, index, size))
		return (0);
	return (1);
}
