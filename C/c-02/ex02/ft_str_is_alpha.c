/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:11:28 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/11 10:00:23 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (!str)
		return (0);
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}
// #include<stdio.h>

// int	main(void)
// {
// 	if (ft_str_is_alpha("teste"))
// 		printf("S");
// 	else
// 		printf("N");
// }
