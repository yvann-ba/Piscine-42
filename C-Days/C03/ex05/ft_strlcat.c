/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:17:42 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/17 18:09:55 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	counter;
	unsigned int	full_size;
	unsigned int	j;

	j = 0;
	while (dest[j] && j < size)
		j++;
	full_size = ft_strlen(src) + j;
	if (size > 0)
	{
		counter = ft_strlen(dest);
		i = 0;
		while (counter < size - 1 && src[i] != '\0')
		{
			dest[counter] = src[i];
			counter++;
			i++;
		}
		dest[counter] = '\0';
	}
	return (full_size);
}
