/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:54:38 by edmedeir          #+#    #+#             */
/*   Updated: 2026/02/27 15:05:25 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	cent;
	char	unid;
	char	denc;

	denc = 0;
	cent = 0;
	unid = 0;

	while (cent < denc && denc < unid)
	{
		if (cent == '7' && denc == '8' && unid == '9')
		{
			break ;
		}
		else
		{
			write (1, & cent,1 );
			write (1 ,&denc , 1 );
			write (1 ,&unid , 1 );
			write (1 ,", " , 1 );
		}
	};
};


int	main(void)
{
	ft_print_comb();
	return (0);
}