/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:44:36 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/11 18:07:35 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	cont;
	int	find;
	int	cont2;

	cont = 0;
	find = 0;
	cont2 = 0;
	while (to_find[find] != '\0')
		find++;
	while (str[cont] != '\0')
	{
		if (to_find[cont2] == str[cont])
			cont2++;
		else if (find == cont2)
			return (to_find);
		else
			cont2 = 0;
		cont++;
	}
	return (0);
}

// #include<unistd.h>

// int	main(void)
// {
// 	char str[] = "testeabcteste";

// 	char to_find[] = "abc";
// 	char *result = ft_strstr(&str, &to_find);
// 	printf("%s\n", result);
// }
