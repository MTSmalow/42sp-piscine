/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:02:18 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/15 14:10:38 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		validation_argument(char	*argv);
char	*str_concat(char *dest, char *src);
int		atois(char c);
char	*cut_line(char *dict, int l);
char	*read_dict(char *dict_name);
char	*extract_dict_line(char	*dict, int l);
char	*wrd_trio(char *trio, int n_trio, char *dict_name);
void	argv_concat(char *argv_final, int c);
void	separated_group(int count_group, char *argv, char *dict_name);
int		no_zero_validation(char *argv);
void	write_zero(char *dict_name);
void	arg_two(char **argv);
void	count_three(char *argv, char *dict_name);
void	arg_three(char **argv);
void	final_print(char *str, int c);
char	*init_malloc(int size);

# define BUFFSIZE 1024

#endif