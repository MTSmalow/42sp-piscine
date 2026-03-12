/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:51:26 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/11 19:11:59 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//n = n*(n-1)*(n-2)*.....
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	if (nb == 0 || !nb)
		return (1);
	if (nb < 0)
		return (0);
	i = 1;
	f = 1;
	while (i++ <= nb)
		f *= i;
	return (f);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(10));
}
