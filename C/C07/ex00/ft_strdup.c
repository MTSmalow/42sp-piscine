/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:56:15 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/16 17:56:50 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		cont;
	char	*ptr;

	cont = 0;
	while (src[cont])
		cont++;
	ptr = (char *)malloc (cont + 1);
	cont = 0;
	if (ptr != 0)
	{
		while (src[cont])
		{
			ptr[cont] = src[cont];
			cont++;
		}
	}
	ptr[cont + 1] = '\0';
	return (ptr);
}

// #include<stdio.h>
// int	main(void)
// {
// 	printf("valor de return: %s\n", ft_strdup("0!@#$%^&*()"));
// }
