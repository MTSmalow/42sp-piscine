/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 10:38:27 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/18 17:57:18 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	min3(int a, int b, int c)
{
	int	m;

	m = a < b ? a : b;
	return (m < c ? m : c);
}

static void	fill_square(t_map *map, int best_row, int best_col, int best)
{
	int	i;
	int	j;
	int	r_start;
	int	c_start;

	r_start = best_row - best + 1;
	c_start = best_col - best + 1;
	i = r_start;
	while (i <= best_row)
	{
		j = c_start;
		while (j <= best_col)
		{
			map->grid[i][j] = map->full;
			j++;
		}
		i++;
	}
}

static void	compute_dp(t_map *map, int **dp,
	int *best_row, int *best_col, int *best)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->rows)
	{
		j = -1;
		while (j++ < map->cols)
		{
			if (map->grid[i][j] == map->obstacle)
				dp[i][j] = 0;
			else if (i == 0 || j == 0)
				dp[i][j] = 1;
			else
				dp[i][j] = min3(dp[i - 1][j], dp[i][j - 1],
						dp[i - 1][j - 1]) + 1;
			if (dp[i][j] > *best)
			{
				*best = dp[i][j];
				*best_row = i;
				*best_col = j;
			}
		}
		i++;
	}
}

void	solve_and_print(t_map *map)
{
	int	**dp;
	int	i;
	int	best;
	int	best_row;
	int	best_col;

	dp = malloc(sizeof(int *) * map->rows);
	if (!dp)
		return ;
	i = 0;
	while (i < map->rows)
	{
		dp[i] = malloc(sizeof(int) * map->cols);
		if (!dp[i])
		{
			while (--i >= 0)
				free(dp[i]);
			free(dp);
			return ;
		}
		i++;
	}
	best = 0;
	best_row = 0;
	best_col = 0;
	compute_dp(map, dp, &best_row, &best_col, &best);
	if (best > 0)
		fill_square(map, best_row, best_col, best);
	i = 0;
	while (i < map->rows)
	{
		write(1, map->grid[i], map->cols);
		write(1, "\n", 1);
		i++;
	}
	i = 0;
	while (i < map->rows)
		free(dp[i++]);
	free(dp);
}
