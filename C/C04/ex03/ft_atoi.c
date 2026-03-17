/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 21:54:29 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/15 09:42:33 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int d)
{
	return (d >= '0' && d <= '9');
}

int	ft_atoi(char *str)
{
	int	res;
	int	s;

	res = 0;
	s = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			s *= -1;
	while (ft_isdigit(*str))
		res = (res * 10) + (*str++ - '0');
	return (res * s);

}
// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 		printf("%d\n", ft_atoi(argv[1]));
// }
