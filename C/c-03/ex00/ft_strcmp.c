/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:11:06 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/12 15:06:31 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	cont;

	cont = 0;
	while (s1[cont] || s2[cont])
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
// 	char a[] = "Abelha";
// 	char b[] = "Abelhaaaa";

// 	result = ft_strcmp(&a, &b);
// 	if (result > 0)
// 		printf("positivo\n");
// 	else if (result < 0)
// 		printf("negativo\n");
// 	else
// 		printf("1\n");
// 	printf("%d\n", result);
// }
