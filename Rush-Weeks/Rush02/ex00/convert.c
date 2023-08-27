/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:48:29 by bdubas            #+#    #+#             */
/*   Updated: 2023/07/30 19:11:36 by ybarbot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}



char	*numToWords(int n, char* s, char *str, int len)
{


	str = malloc(sizeof(char) * len + 1);

    char	*one[] = { "", "one ", "two ", "three ", "four ",
                "five ", "six ", "seven ", "eight ",
                "nine ", "ten ", "eleven ", "twelve ",
                "thirteen ", "fourteen ", "fifteen ",
                "sixteen ", "seventeen ", "eighteen ",
                "nineteen "
              };

    char	*ten[] = { "", "", "twenty ", "thirty ", "forty ",
                "fifty ", "sixty ", "seventy ", "eighty ",
                "ninety "
              };
    
    if (n > 19)
    {
        ft_strcat(str, ten[n / 10]);
        ft_strcat(str, one[n % 10]);
    }
    else
    {
        ft_strcat(str, one[n]);
    }

    if (n)
    {
        ft_strcat(str, s);
    }
    return (str);
}

char	*convertToWords(int n, char *out)
{
    char str[200] = {0};
    ft_strcat(out, numToWords(((n / 1000) % 100), "thousand ", str, 200));
    ft_strcat(out, numToWords(((n / 100) % 10), "hundred ", str, 200));
    ft_strcat(out, numToWords((n % 100), "", str, 200));
    return out;
}
/*
int main()
{

    int num = 6666;
    char str[60] = {};

    printf("%s",convertToWords(num, str));
    return 0;
}
*/
