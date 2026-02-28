/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:19:57 by edmedeir          #+#    #+#             */
/*   Updated: 2026/02/26 14:49:54 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n){
	char positivo = 'p';
	char negativo = 'n';
	if(n >= 0){
		write(1, &positivo, 1);
	}else
	{
		write(1, &negativo, 1);
	}
};

int main(void){
  ft_is_negative(10);
  return(0);
};