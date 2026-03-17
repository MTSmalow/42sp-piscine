/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 09:18:01 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/11 09:58:59 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (!str)
		return (0);
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	if (ft_str_is_uppercase("FGHJ"))
// 		printf("S");
// 	else
// 		printf("N");
// }
