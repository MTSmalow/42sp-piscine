/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 09:21:47 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/14 12:03:19 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

// #include<stdio.h>

// int	main(void)
// {
// 	if (ft_str_is_printable("FGHfjhhffhhfhffhfhfhhfhfJ"))
// 		printf("S");
// 	else
// 		printf("N");
// }
