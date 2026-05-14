/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 11:30:35 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/14 14:38:53 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int		num;
	char	chnum;

	chnum = 0;
	while (num <= 9)
	{
		chnum = num + '0';
		ft_putchar(chnum);
		num++;
	}
}