/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 09:33:54 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/11 09:56:13 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_lowercase(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	srt[10] = "fffhdhdhdh";

// 	printf(ft_strupcase(srt));
// }
