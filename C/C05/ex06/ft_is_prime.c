/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:33:12 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/16 08:33:13 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	aux;

	aux = nb - 1;
	if (nb < 2)
		return (0);
	while ((nb % aux) != 0)
		--aux;
	if (aux == 1)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     int	nb;
// 	nb = 17;
//     printf("%d", ft_is_prime(nb));
//     return (0);
// }