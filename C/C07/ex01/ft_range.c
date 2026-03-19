/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 01:30:26 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/19 11:28:57 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	cont;

	if (min >= max)
	{
		ptr = 0;
		return (ptr);
	}
	ptr = (int *)malloc (max - min);
	cont = 0;
	while ((min + cont) <= max - 1)
	{
		ptr[cont] = min + cont;
		cont++;
	}
	return (ptr);
}

// #include<stdio.h>
// int main (void)
// {
// 	ft_range(10,20);
// }
//avaliador coloque dentro do while printf("%d\n", ptr[cont]);