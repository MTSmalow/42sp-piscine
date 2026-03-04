/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:33:20 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/02 16:42:44 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 23;
// 	b = 10;
// 	printf("valor de a: %d\n", a);
// 	printf("valor de b: %d\n", b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("valor de div: %d\n", a);
// 	printf("valor de mod: %d\n", b);
// }
