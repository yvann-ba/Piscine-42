/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:51:19 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/20 18:01:38 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_character_occurence(char *base);
int		ft_check_parameters(char *base);
void	unsigned_nbr(unsigned int nbr, char *base);
void	ft_putnbr_base(int nbr, char *base);

// check occurrences using an ascii table as reference
int	ft_check_character_occurence(char *base)
{
	int		j;
	int		i;
	char	ascii_table[127];

	j = 0;
	while (j != 127)
	{
		ascii_table[j] = 0;
		i = 0;
		while (base[i])
		{
			if (j == base[i])
				ascii_table[j]++;
			i++;
		}
		j++;
	}
	j = 0;
	while (ascii_table[j])
	{
		if (ascii_table[j] > 1)
			return (0);
		j++;
	}
	return (1);
}

// check if base is greater than 1 and contains operation signs
int	ft_check_parameters(char *base)
{
	int	i;

	if (base[0] == '\0' || base[1] == '\0' )
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

// handles all negative numbers even -2,147,483,648
void	unsigned_nbr(unsigned int nbr, char *base)
{
	int		i;
	int		digit;

	i = 0;
	while (base[i])
		i++;
	digit = nbr % i;
	nbr = nbr / i;
	if (nbr)
		unsigned_nbr(nbr, base);
	write(1, &base[digit], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	p;

	if (ft_check_parameters(base) && ft_check_character_occurence(base))
	{	
		if (nbr < 0)
		{
			write (1, "-", 1);
			p = -nbr;
		}
		else
			p = nbr;
		unsigned_nbr(p, base);
	}
}
