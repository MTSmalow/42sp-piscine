/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:35:22 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/12 13:57:26 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_params(int *srt, char	*constrais[])
{
	int		cont;
	int		cont2;
	char	*name;

	cont = 1;
	cont2 = 0;
	while (cont < srt)
	{
		name = constrais[cont];
		while (constrais[cont][cont2])
			cont2++;
		write(1, name, cont2);
		write(1, "\n", 1);
		cont2 = 0;
		cont++;
	}
}

char	ft_sort_params(int *srt, char	*constrais[])
{
	int	cont;
	int	params1;
	int	params2;
	int	value;

	cont = 0;
	while (constrais[cont] || constrais[cont + 1])
	{
		
	}
}

int	main(int argc, char *argv[])
{
}
