/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 09:48:38 by acaique-          #+#    #+#             */
/*   Updated: 2026/03/15 17:35:57 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	validation_argument(char *argv)
{
	int	count_argv;

	count_argv = 0;
	while (argv[count_argv])
	{
		if (!(argv[count_argv] >= '0' && argv[count_argv] <= '9'))
			return (0);
		count_argv++;
	}
	if (count_argv > 39)
		return (2);
	return (1);
}

int	no_zero_validation(char *argv)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] != '0')
			s = 1;
		i++;
	}
	return (s);
}

char	*init_malloc(int size)
{
	char	*str;

	str = malloc(size * sizeof(char));
	*str = '\0';
	return (str);
}
