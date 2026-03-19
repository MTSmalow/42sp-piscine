/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:06:55 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/19 10:25:52 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	cont;
	int	size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == 0)
		return (-1);
	cont = 0;
	while (cont < size)
	{
		(*range)[cont] = min + cont;
		cont++;
	}
	return (size);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int	*range;
// 	int	size;
// 	int	i;
// 	printf("Teste 1: min=2, max=7\n");
// 	size = ft_ultimate_range(&range, 2, 7);
// 	printf("Tamanho: %d\n", size);
// 	i = 0;
// 	while (i < size)
// 		printf("range[%d] = %d\n", i, range[i++]);
// 	free(range);
// 	printf("\nTeste 2: min=5, max=5\n");
// 	size = ft_ultimate_range(&range, 5, 5);
// 	printf("Tamanho: %d | range: %p\n", size, (void *)range);
// 	printf("\nTeste 3: min=10, max=3\n");
// 	size = ft_ultimate_range(&range, 10, 3);
// 	printf("Tamanho: %d | range: %p\n", size, (void *)range);
// 	printf("\nTeste 4: min=-3, max=3\n");
// 	size = ft_ultimate_range(&range, -3, 3);
// 	printf("Tamanho: %d\n", size);
// 	i = 0;
// 	while (i < size)
// 		printf("range[%d] = %d\n", i, range[i++]);
// 	free(range);

// 	return (0);
// }