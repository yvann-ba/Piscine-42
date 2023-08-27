/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:54:25 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/16 09:26:53 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] = str[j] + 32;
		j++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] -32;
	while (str[i + 1] != '\0')
	{
		if (! ((str[i] >= 'a' && str[i] <= 'z') || \
		(str[i] >= 'A' && str[i] <= 'Z') || \
		(str[i] >= '0' && str[i] <= '9')) && \
		str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
