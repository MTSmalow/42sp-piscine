/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:54:38 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/02 15:54:44 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	print_number(int hundreds, int tens, int unit)
{
	print(hundreds);
	print(tens);
	print(unit);
	print(',');
	print(' ');
}

void	ft_print_comb(void)
{
	char	hundreds;
	char	tens;
	char	unit;

	hundreds = '0';
	tens = '1';
	unit = '2';
	while (hundreds < '7')
	{
		while (tens <= '8')
		{
			while (unit <= '9')
			{
				print_number(hundreds, tens, unit);
				unit++;
			}
			tens++;
			unit = tens + 1;
		}	
		tens = hundreds + 1;
		hundreds++;
	}
	print('7');
	print('8');
	print('9');
}

// int main(){
// 	ft_print_comb();
// 	return (0);
// }