/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 14:05:33 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/04 10:34:55 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	cont;
	int	cont2;
	int	cont3;

	cont3 = 0;
	cont = 0;
	while (cont3 < size)
	{
		cont = 0;
		while (cont < size -1)
		{
			if (tab[cont] >= tab[cont + 1])
			{
				temp = tab[cont];
				tab[cont] = tab[cont + 1];
				tab[cont + 1] = temp;
			}
			cont++;
		}
		cont3++;
	}
}

void	array_print(int *tab, int size)
{
	int	cont;

	cont = 0;
	while (cont <= size - 1)
	{
		printf("%d, ", tab[cont]);
		cont++;
	}
}

// int	main(void)
// {
// 	int tab[10] = {1,0,6,2,9654,212,32,2,23,231};
// 	ft_sort_int_tab(tab, 10);
// 	array_print(tab,10);
// }
