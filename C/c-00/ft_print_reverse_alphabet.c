/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 12:52:53 by edmedeir          #+#    #+#             */
/*   Updated: 2026/02/26 12:53:42 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void){
  char letra_atual = 'z';
  while (letra_atual >= 'a'){
    write(1, &letra_atual, 1);
    letra_atual = letra_atual - 1;
  }
};

int main(void){
  ft_print_reverse_alphabet();
  return (0);
};