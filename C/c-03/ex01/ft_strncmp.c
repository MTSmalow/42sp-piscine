/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 17:53:04 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/12 15:06:35 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while (s1[cont] != '\0' || s2[cont] != '\0' && cont < n)
	{
		if (!(s1[cont] == s2[cont]))
			return (s1[cont] - s2[cont]);
		cont++;
	}
	return (0);
}
// #include<stdio.h>

// int	main(void)
// {
// 	int	result;
// 	char a[] = "teetd";
// 	char b[] = "teate";

// 	result = ft_strncmp(a, b , 3);
// 	if (result > 0)
// 		printf("positivo\n");
// 	else if (result < 0)
// 		printf("negativo\n");
// 	else
// 		printf("0\n");
// 	printf("valor do result: %d\n", result);
// }
