/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmatriz.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 10:57:34 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/08 13:24:35 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putmatriz(int matriz[4][4])
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			c = matriz[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

int	is_safe(int matriz[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (matriz[row][i] == num || matriz[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int matriz[4][4], int constraints[16], int pos)
{
	int	row;
	int	col;
	int	num;

	if (pos == 16)
		return (1);
	row = pos / 4;
	col = pos % 4;
	num = 0;
	while (++num <= 4)
	{
		if (is_safe(matriz, row, col, num))
		{
			matriz[row][col] = num;
			if (solve(matriz, constraints, pos + 1))
				return (1);
			matriz[row][col] = 0;
		}
	}
	return (0);
}
