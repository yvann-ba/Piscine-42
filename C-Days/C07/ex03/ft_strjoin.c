/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:11:01 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/26 18:18:43 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*check_null(int size, char *sep, char **strs)
{
	char	*string_join;

	if (size == 0 || strs == NULL || sep == NULL)
	{
		string_join = malloc(sizeof(char));
		string_join[0] = '\0';
		return (string_join);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *sep, char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	j = 0;
	while (sep[j])
	{
		dest[i] = sep[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*string_join;
	int		full_length;

	full_length = 0;
	i = -1;
	if (check_null(size, sep, strs) != 0)
		return (check_null(size, sep, strs));
	while (++i < size)
		full_length += ft_strlen(strs[i]);
	full_length += (ft_strlen(sep) * size) - ft_strlen(sep);
	string_join = malloc((full_length + 1) * sizeof(char));
	*string_join = 0;
	if (string_join == NULL)
		return (0);
	i = -1;
	while (++i < size)
	{
		string_join = ft_strcat(sep, string_join, strs[i]);
		string_join[full_length] = '\0';
	}
	return (string_join);
}
