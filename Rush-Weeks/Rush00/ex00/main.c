/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:33:37 by babonnet          #+#    #+#             */
/*   Updated: 2023/07/16 18:15:12 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int width, int length);

int	ft_unsigned_atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (str[i] == '-')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (nb);
}

int	main(int argc, char **argv)
{
	int	length;
	int	width;

	if (argc != 3)
		return (0);
	width = ft_unsigned_atoi(argv[1]);
	length = ft_unsigned_atoi(argv[2]);
	if (width > 2147483647 || width < 1)
		return (0);
	if (length > 2147483647 || length < 1)
		return (0);
	rush(width, length);
	return (0);
}
