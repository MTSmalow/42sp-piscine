/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 10:13:24 by acaique-          #+#    #+#             */
/*   Updated: 2026/03/15 17:09:36 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	add_zero(char *argv)
{
	int	count_argv;
	int	rest;
	int	zero;
	int	count;

	count_argv = 0;
	while (argv[count_argv])
		count_argv++;
	rest = count_argv % 3;
	zero = 3 - rest;
	count = count_argv;
	if (rest != 0)
	{
		while (count >= 0)
		{
			argv[count + zero] = argv[count];
			count--;
		}
		count = 0;
		while (count < zero)
		{
			argv[count] = '0';
			count++;
		}
	}
}

void	copy_three(char *src, char *dest, int start)
{
	int	count;

	count = 0;
	while (count < 3)
	{
		dest[count] = src[start + count];
		count++;
	}
	dest[3] = '\0';
}

void	separated_group(int count_group, char *argv, char *dict_name)
{
	int		count_argv;
	char	dest[4];
	char	*argv_final;
	int		c;

	c = 0;
	count_argv = 0;
	while (count_group > 0)
	{
		copy_three(argv, dest, count_argv);
		argv_final = wrd_trio(dest, count_group, dict_name);
		argv_concat(argv_final, c);
		free(argv_final);
		c++;
		count_argv += 3;
		count_group--;
	}
}

void	count_three(char *argv, char *dict_name)
{
	int	count_group;

	while (*argv == '0')
		argv++;
	add_zero(argv);
	count_group = 0;
	while (argv[count_group])
		count_group++;
	count_group = count_group / 3;
	separated_group(count_group, argv, dict_name);
}

void	argv_concat(char *argv_final, int c)
{
	int		count_str;
	int		count_argv_final;
	char	*str;

	str = init_malloc(200);
	if (!str)
		return ;
	str[0] = '\0';
	count_str = 0;
	count_argv_final = 0;
	while (argv_final[count_argv_final])
	{
		str[count_str] = argv_final[count_argv_final];
		count_argv_final++;
		count_str++;
	}
	str[count_str] = '\0';
	final_print(str, c);
}
