/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 10:55:57 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/12 11:37:55 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	l;

	l = 'a';

	while (l <= 'z')
	{
		write(1, &l, 1);
		l++;
	}
}

// int	main()
// {
// 	ft_print_alphabet();
// 	return(0);
// }
