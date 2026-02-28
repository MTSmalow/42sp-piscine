/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 12:57:06 by edmedeir          #+#    #+#             */
/*   Updated: 2026/02/27 15:09:54 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void){
  char	numA;

	numA = '0';
  while (numA <= '9')
  {
    write(1, &numA, 1);
  	numA = numA + 1;

  }
};

int	main(void)
{
  ft_print_numbers ();
  return (0);
}