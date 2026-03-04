/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 14:54:45 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/02 16:24:13 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 1;
// 	b = 5;
// 	printf("valor a inicial %d\n", a);
// 	printf("valor a inicial %d\n", b);
// 	ft_swap(&a, &b);
// 	printf("valor a pos swap %d\n", a);
// 	printf("valor a pos swap %d\n", b);
// }
