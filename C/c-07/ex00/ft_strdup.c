/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:56:15 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/15 01:28:07 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		cont;
	char	*ptr;

	cont = 0;
	while (src[cont])
		cont++;
	ptr = (char *)malloc (cont);
	cont = 0;
	if (ptr != 0)
	{
		while (src[cont])
		{
			ptr[cont] = src[cont];
			cont++;
		}
	}
	return (ptr);
}

// #include<stdio.h>

// int	main(void)
// {
// 	printf("valor de return: %s\n", ft_strdup("teste"));
// }
