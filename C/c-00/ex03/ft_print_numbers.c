/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 12:57:06 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/01 17:54:32 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num_a;

	num_a = '0';
	while (num_a <= '9')
	{
		write(1, &num_a, 1);
		num_a = num_a + 1;
	}
}

// int	main(void)
// {
// 	ft_print_numbers ();
// 	return (0);
// }