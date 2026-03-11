/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 09:28:38 by edmedeir          #+#    #+#             */
/*   Updated: 2026/03/10 15:31:58 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	d_len = 0;
	while (dest[d_len] && d_len < size)
		d_len++;
	s_len = 0;
	while (src[s_len])
		s_len++;
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while (src[i] && (d_len + i) < (size - 1))
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}
//#include<stdio.h>

// int main(void)
// {
// 	char dest[10] = "ola";
// 	char src[] = " mundo";

// 	ft_strlcat(dest, src, 10);
// 	printf("%s\n", dest);
// }