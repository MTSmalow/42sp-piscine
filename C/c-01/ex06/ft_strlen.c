/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 09:12:26 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/05 12:26:35 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int	main(int i)
// {
// 	int	tamanho;

// 	tamanho = ft_strlen("oi");
// 	printf("o numero de caracteres é %d\n", tamanho);
// }
