/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 08:28:37 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/28 10:36:21 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_cut_charset(char *str, char *charset)
{
	int		i;
	int		j;
	char	**string_list;

	if (charset[0] == '\0')
		return (str);
	j = 0;
	while (str[j])
	{
		i = 0;
		while (charset[i])
		{
			if (charset[i] == str[i + j])
			{
				
			}
			i++;
		}
		j++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{

	ft_cut_charset(str, charset);
}

int	main(void)
{
	char *str = "Hello les saucisses";
	char *charset = "bilou";
	ft_split(str, charset);
	return (0);
}
