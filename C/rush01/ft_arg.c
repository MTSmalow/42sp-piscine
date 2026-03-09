/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 17:52:16 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/08 13:23:50 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putmatriz(int matriz[4][4]);
int		solve(int matriz[4][4], int constraints[16], int pos);

int	ft_error(void)
{
	write(2, "Error\n", 6);
	return (1);
}

int	is_valid_input(char *str, int *constraints)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
			constraints[j++] = str[i] - '0';
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	return (i == 31);
}

int	main(int argc, char *argv[])
{
	int	matriz[4][4];
	int	constraints[16];

	if (argc != 2 || !is_valid_input(argv[1], constraints))
		return (ft_error());
	if (solve(matriz, constraints, 0))
		ft_putmatriz(matriz);
	else
		ft_error();
	return (0);
}
