/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 17:53:04 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/06 18:15:57 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	cont;

	cont = 0;
	while (s1[cont] && s2[cont] && cont < n)
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
// 	char a[] = "tebtd";
// 	char b[] = "teate";

// 	result = ft_strncmp(&a, &b , 3);
// 	if (result > 0)
// 		printf("positivo\n");
// 	else if (result < 0)
// 		printf("negativo\n");
// 	else
// 		printf("0\n");
// 	printf("valor do result: %d\n", result);
// }
