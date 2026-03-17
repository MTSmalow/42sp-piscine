/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:21:07 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/05 10:20:06 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	if (!dest || !src)
	{
		return (0);
	}
	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
// void main(void)
// {
// 	char arry[10];

// 	printf(ft_strcpy(arry, "ola"));
// }
