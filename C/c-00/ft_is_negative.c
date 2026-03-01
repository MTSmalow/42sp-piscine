/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 16:49:37 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/01 17:59:42 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positivo;
	char	negativo;

	positivo = 'p';
	negativo = 'n';
	if (n >= 0)
	{
		write(1, &positivo, 1);
		write(1, &negativo, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(10);
// 	return (0);
// }
