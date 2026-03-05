/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:52:34 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/05 10:19:03 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (!str)
	{
		return (0);
	}
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	if (ft_str_is_numeric("122"))
// 		printf("S");
// 	else
// 		printf("N");
// }
