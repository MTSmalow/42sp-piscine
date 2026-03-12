/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 19:26:07 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/11 19:41:07 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result += nb * nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(10, 10));
}
