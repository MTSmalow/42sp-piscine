/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:51:15 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/12 15:36:25 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int		cont;
	int		cont2;
	char	*name;

	cont = argc - 1;
	cont2 = 0;
	while (cont != 0)
	{
		name = argv[cont];
		while (argv[cont][cont2])
			cont2++;
		write(1, name, cont2);
		write(1, "\n", 1);
		cont2 = 0;
		cont--;
	}
}
