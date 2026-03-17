/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_concat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:05:31 by lucferre          #+#    #+#             */
/*   Updated: 2026/03/15 17:35:32 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*str_concat(char *dest, char *word)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	dest[i] = ' ';
	i++;
	while (word[j] != '\0')
	{
		dest[i] = word[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	free(word);
	return (dest);
}

int	atois(char c)
{
	return (c - '0');
}

char	*cut_line(char *dict, int i)
{
	char	*word;
	int		j;

	word = init_malloc(100);
	while (dict[i] != '\n')
	{
		i++;
	}
	while (dict[i] != ' ' && dict[i] != ':')
	{
		i--;
	}
	j = 0;
	i++;
	while (dict[i] != '\n')
	{
		word[j] = dict[i];
		i++;
		j++;
	}
	return (word);
}

void	final_print(char *str, int c)
{
	int		i;

	i = 0;
	if (c == 0)
		i++;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	free(str);
}
