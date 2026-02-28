/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:59:14 by edmedeir          #+#    #+#             */
/*   Updated: 2026/02/26 14:31:34 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void){
	char letra_atual = 'a';
	while (letra_atual <= 'z'){
		write(1, &letra_atual, 1);
		letra_atual = letra_atual + 1;
	}
};

int main(void){
	ft_print_alphabet();
return (0);
};