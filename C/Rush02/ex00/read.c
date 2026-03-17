/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:08:30 by lucferre          #+#    #+#             */
/*   Updated: 2026/03/15 17:11:25 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*read_dict(char	*dict_name)
{
	int		fd;
	char	*dict;

	fd = open(dict_name, O_RDONLY, 0777);
	dict = init_malloc(BUFFSIZE);
	read(fd, dict, BUFFSIZE);
	close(fd);
	return (dict);
}

char	*extract_dict_line(char *dict, int l)
{
	char	*word;
	int		lc;
	int		i;

	lc = 0;
	i = 0;
	while (lc < l)
	{
		while (dict[i] != '\n')
			i++;
		lc++;
		i++;
	}
	word = cut_line(dict, i);
	return (word);
}

char	*wrd_trio(char *trio, int n_trio, char *dict_name)
{
	char	*trio_word;
	char	*dict;

	trio_word = init_malloc(500);
	dict = read_dict(dict_name);
	if (trio[0] != '0')
	{
		str_concat(trio_word, extract_dict_line(dict, atois(trio[0])));
		str_concat(trio_word, extract_dict_line(dict, 28));
	}
	if (trio[1] != '0')
	{
		if (trio[1] != '1')
			str_concat(trio_word,
				extract_dict_line(dict, atois(trio[1]) + 18));
		else
			str_concat(trio_word,
				extract_dict_line(dict, atois(trio[2]) + 10));
	}
	if (trio[2] != '0' && trio[1] != '1')
		str_concat(trio_word, extract_dict_line(dict, atois(trio[2])));
	if (n_trio > 1 && (trio[0] != '0' || trio[1] != '0' || trio[2] != '0'))
		str_concat(trio_word, extract_dict_line(dict, n_trio + 27));
	free(dict);
	return (trio_word);
}

void	write_zero(char *dict_name)
{
	char	*dict;
	char	*zero;
	int		i;

	zero = init_malloc(1000);
	dict = read_dict(dict_name);
	zero = extract_dict_line(dict, 0);
	i = 0;
	while (zero[i] != '\0')
	{
		write(1, &zero[i], 1);
		i++;
	}
	free(zero);
}
