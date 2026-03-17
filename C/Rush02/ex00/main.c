/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 09:41:52 by acaique-          #+#    #+#             */
/*   Updated: 2026/03/15 17:26:08 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		arg_two(argv);
		write(1, "\n", 1);
	}
	else if (argc == 3)
	{
		arg_three(argv);
		write(1, "\n", 1);
	}
	else
		write(1, "Invalid number of arguments\n", 28);
}

void	arg_two(char **argv)
{
	char	*dict_name;

	dict_name = "numbers.dict";
	if (validation_argument(argv[1]) == 1)
	{
		if (no_zero_validation(argv[1]) == 1)
			count_three(argv[1], dict_name);
		else
			write_zero(dict_name);
	}
	else if (validation_argument(argv[1]) == 0)
		write(1, "Error", 5);
	else if (validation_argument(argv[1]) == 2)
		write(1, "Error: max 39 chars", 19);
}

void	arg_three(char **argv)
{
	int		fd;

	fd = open(argv[1], O_RDONLY, 0777);
	if (fd != -1)
	{
		if (validation_argument(argv[2]) == 1)
		{
			if (no_zero_validation(argv[2]) == 1)
				count_three(argv[2], argv[1]);
			else
				write_zero(argv[1]);
		}
		else if (validation_argument(argv[2]) == 0)
			write(1, "Error", 5);
		else if (validation_argument(argv[2]) == 2)
			write(1, "Error: max 39 chars", 19);
	}
	else
		write(1, "Dict Error", 10);
}
