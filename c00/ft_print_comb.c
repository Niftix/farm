/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourlogin <yourlogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 00:00:00 by yourlogin         #+#    #+#             */
/*   Updated: 2025/04/24 00:00:00 by yourlogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_comb(void);
void	ft_condition(char c, char d, char u);

int	main(void)
{
	ft_print_comb();
	return 0;
}
*/
void	ft_condition(char c, char d, char u)
{
	if (c < d && d < u && u > c)
	{
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, &u, 1);
		if (!(c == '7' && d == '8' && u == '9'))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '0';
	u = '0';
	while (c <= '9')
	{
		while (d <= '9')
		{
			while (u <= '9')
			{
				ft_condition(c, d, u);
				u++;
			}
			d++;
			u = '0';
		}
		c++;
		d = '0';
	}
}
