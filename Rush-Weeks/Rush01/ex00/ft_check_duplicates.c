/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicates.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbot <ybarbot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:24:42 by ybarbot           #+#    #+#             */
/*   Updated: 2023/07/23 12:24:41 by judetre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_duplicates(int *array, int index, int array_size)
{
	int	comparaison;

	comparaison = index -1;
	if (comparaison < 0)
		return (1);
	while (comparaison % array_size != 0 && index % array_size != 0)
	{
		if (array[index] == array[comparaison])
			return (0);
		comparaison--;
	}
	if (array[index] == array[comparaison] && index % array_size != 0)
		return (0);
	comparaison = index -array_size;
	if (comparaison < 0)
		return (1);
	while (comparaison / array_size != 0 && index / array_size != 0)
	{
		if (array[index] == array[comparaison])
			return (0);
		comparaison -= array_size;
	}
	if (array[index] == array[comparaison] && index / array_size != 0)
		return (0);
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	parametres : tableau actuel, index acutel, taille du tableau
	int test[1];
	test[0] = '1';
	printf("tableau de 1 :");
	if(ft_check_duplicate(test,1,1) == 1)
		printf("ok\n");
	else
		printf("ko\n");
	int test2Valid[4] = {1, 2, 2, 1};
	printf("tableau de 2:");
	if(ft_check_duplicate(test2Valid,4,2) == 1)
		printf("ok\n");
	else
		printf("ko\n");
	int test2Invalid[4] = {1, 2, 1 ,0};
	printf("tableau de 2(invalide) : ");
	if( ft_check_duplicate(test2Invalid,3,2) == 0)
		printf("ok");
	else
	
		printf("ko\n");
	int test3Invalid[9] = { 1, 2, 0, \
							3, 1, 9, \
							4, 5, 9};
	printf("tableau de 3 : ");
	if(ft_check_duplicate(test3Invalid,5, 3) == 1)
		printf("ok");
	else
		printf("ko");
}
*/
