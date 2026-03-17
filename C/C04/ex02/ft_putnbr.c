/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 13:50:39 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/15 09:48:22 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	result;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		nb = nb * -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	result = nb % 10 + '0';
	write(1, &result, 1);
}
// int	main(void)
// {
// 	ft_putnbr(-22);
// }
