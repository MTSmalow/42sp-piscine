/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmatriz.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 10:57:34 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/08 01:09:52 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putmatriz(int matriz[4][4])
{
	int		contl;
	int		contc;
	char	c;

	contl = 0;
	while (contl < 4)
	{
		contc = 0;
		while (contc < 4)
		{
			c = matriz[contl][contc] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			contc++;
		}
		write(1, "\n", 2);
		contl++;
	}
}

int	main(void)
{
	int	matriz[4][4] = {
		{1, 2, 3 ,1},
		{4, 5, 6 ,4},
		{7, 8, 9 ,7},
		{1, 2, 3 ,1}
	};
	ft_putmatriz(matriz);
}

