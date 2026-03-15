/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:17:02 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/11 18:07:23 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	cont;
	int	cont2;

	cont = 0;
	cont2 = 0;
	while (dest[cont] != '\0')
		cont++;
	while (src[cont2] != '\0')
	{
		dest[cont] = src[cont2];
		cont++;
		cont2++;
	}
	dest[cont] = '\0';
	return (dest);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char dest[50] = "ola, ";
// 	char src[] = "mundo";

// 	ft_strcat(dest, src);

// 	printf("%s\n", dest);
// }
