/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 17:52:16 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/08 01:06:23 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	capture(int argc, char *argv[])
{
	int		cont;
	char	c;

	if (argc == 2)
	{
		cont = 0;
		while (argv[1][cont])
		{
			c = argv[1][cont];
			write(1, &c, 1);
			cont++;
		}
		write(1, "\n", 1);
		return (0);
	}
	return (1);
}

int	spaces(int argc, char *argv[])
{
	int	cont;

	if (argc != 2)
		return (1);
	cont = 0;
	while (argv[1][cont] && cont < 31)
	{
		if (cont % 2 == 1)
			if (argv[1][cont] != ' ')
				return (1);
		cont++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 2 && spaces(argc, argv) == 0)
	{
		capture(argc, argv);
		return (0);
	}
	return (1);
}
