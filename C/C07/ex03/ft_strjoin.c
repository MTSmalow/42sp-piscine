/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:55:55 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/18 14:40:34 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest + i);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	total;
	int	i;
	int	sep_len;

	total = 0;
	i = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		if (i < size - 1)
			total += sep_len;
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*ptr;
	int		i;

	if (size <= 0)
	{
		res = malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}
	res = (char *)malloc(sizeof(char) * (get_total_len(size, strs, sep) + 1));
	if (!res)
		return (NULL);
	ptr = res;
	i = 0;
	while (i < size)
	{
		ptr = ft_strcpy(ptr, strs[i]);
		if (i < size - 1)
			ptr = ft_strcpy(ptr, sep);
		i++;
	}
	return (res);
}
