/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 11:41:47 by vneves-c          #+#    #+#             */
/*   Updated: 2026/03/01 16:07:56 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_header(int line)
{
	int	i;

	i = 0;
	while (i < line)
	{
		if (i == 0 || i == line - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

void	ft_mid(int line)
{
	int	i;

	i = 0;
	while (i < line)
	{
		if (i == 0 || i == line - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	matriz(int x, int y)
{
	int	column;

	column = 0;
	while (column < y)
	{
		if (column == 0 || column == y - 1)
			ft_header(x);
		else
			ft_mid(x);
		column++;
	}
}

int	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		ft_putchar('\0');
	else
		matriz(x, y);
	return (0);
}
