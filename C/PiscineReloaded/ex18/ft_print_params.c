/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 16:11:17 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/12 16:18:11 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cont;

	while (str[cont])
		cont++;
	write(1, &str, cont);
}

int	main(int argc, char argv[])
{
	int	cont;

	cont = 1;
	while(cont <= argc)
		ft_putstr(argv[cont]);
}