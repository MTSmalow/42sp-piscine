/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:20:25 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/15 10:21:04 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int		cont;
	char	*name;

	if (argc != 1)
		return (0);
	cont = 0;
	name = argv[0];
	while (argv[0][cont])
		cont++;
	write(1, name, cont);
	return (0);
}