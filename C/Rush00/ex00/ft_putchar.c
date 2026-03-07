/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 11:40:44 by vneves-c          #+#    #+#             */
/*   Updated: 2026/02/28 17:17:08 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char letter)
{
	int	terminal_output;
	int	file_syze_in_bytes;

	terminal_output = 1;
	file_syze_in_bytes = 1;
	return (write(terminal_output, &letter, file_syze_in_bytes));
}
