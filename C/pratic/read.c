/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 10:09:36 by edmedeir          #+#    #+#             */
/*   Updated: 2026/02/28 11:50:20 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#define BUFFER_SIZE	1024

int	main(void)
{
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_lidos;

	bytes_lidos = read(STDIN_FILENO, buffer, BUFFER_SIZE);

	if (bytes_lidos > 0)
	{
		if (buffer[BUFFER_SIZE] == '\n')
		{
			buffer[BUFFER_SIZE] = '\0';
		}
		else
		{
			buffer[bytes_lidos] = '\0';
		}
	}

	write(1, buffer, bytes_lidos);
}
