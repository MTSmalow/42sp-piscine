/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 01:30:26 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/15 03:51:10 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	cont;

	ptr = (int *)malloc (max - min);
	cont = 0;
	while ((min + cont) <= max)
	{
		ptr[cont] = min + cont;
		cont++;
	}
	return (ptr);
}

