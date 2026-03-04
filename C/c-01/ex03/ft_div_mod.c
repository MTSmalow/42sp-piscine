/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 14:56:16 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/02 16:42:52 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 23;
// 	b = 10;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("valor de a: %d\n", a);
// 	printf("valor de b: %d\n", b);
// 	printf("valor de div: %d\n", div);
// 	printf("valor de mod: %d\n", mod);
// }