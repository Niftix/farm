/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourlogin <yourlogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 00:00:00 by yourlogin         #+#    #+#             */
/*   Updated: 2025/04/24 00:00:00 by yourlogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_alphabet();

int	main(void)
{
	ft_print_alphabet();
	return 0;
}
*/
void	ft_print_alphabet(void)
{
	char	a;
	char	z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		write(1, &a, 1);
		a++;
	}
}
