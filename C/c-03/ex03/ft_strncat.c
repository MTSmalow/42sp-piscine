/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:37:27 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/07 09:44:14 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	cont;
	int	cont2;

	cont = 0;
	cont2 = 0;
	while (dest[cont])
		cont++;
	while (src[cont2] && cont2 < nb)
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

// 	ft_strncat(&dest, &src, 2);

// 	printf("%s\n", dest);
// }
