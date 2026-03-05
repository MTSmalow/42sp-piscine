/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 09:21:47 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/05 09:33:29 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_str_is_printable(char *str)
{
	if (!str)
	{
		return (0);
	}
	if (*str == '\0')
	{
		return (0);
	}
	while (*str)
	{
		if (!(*str >= 0x20 && *str <= 0x7e))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	if (ft_str_is_printable("FGHfjhhffhhfhfhfhfhfhhfhfJ"))
// 		printf("S");
// 	else
// 		printf("N");
// }
