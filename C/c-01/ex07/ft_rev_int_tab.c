/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:09:14 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/04 15:01:10 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>
// #include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	temp;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;
		left++;
		right--;
	}
}

// void	array_print(int *tab, int size)
// {
// 	int	cont;

// 	cont = 0;
// 	while (cont <= size - 1)
// 	{
// 		printf("%d, ", tab[cont]);
// 		cont++;
// 	}
// }

// int	main(void)
// {
// 	int	tab[4];

// 	tab[0] = 10;
// 	tab[1] = 11;
// 	tab[2] = 12;
// 	tab[3] = 13;
// 	ft_rev_int_tab(tab, 4);
// 	array_print(tab, 4);
// }
