/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:56:02 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/12 15:31:44 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	main(void)
{
	int		cont;
	char	car;

	cont = 1;
	while (cont <= 100)
	{
		if (cont % 4 == 0)
			write(1, "fizz\n", 5);
		else if (cont % 7 == 0)
			write(1, "buzz\n", 5);
		else
			printf("%d\n", cont);
		cont++;
	}
}