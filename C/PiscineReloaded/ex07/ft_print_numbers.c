/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 11:30:35 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/12 12:59:23 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		num;
	char	chnum;

	chnum = 0;
	while (num <= 9)
	{
		chnum = num + '0';
		write(1, &chnum, 1);
		num++;
	}
}

int	main()
{
	ft_print_numbers();
	return(0);
}
