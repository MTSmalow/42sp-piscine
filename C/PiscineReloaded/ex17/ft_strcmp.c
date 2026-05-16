/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 15:55:42 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/16 15:26:17 by edmedeir         ###   ########.fr       */
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
