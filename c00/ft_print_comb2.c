/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourlogin <yourlogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 00:00:00 by yourlogin         #+#    #+#             */
/*   Updated: 2025/04/24 00:00:00 by yourlogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(int left, int right);
void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return 0;
}

void	display(int left, int right)
{
	char	d1;
	char	u1;
	char	d2;
	char	u2;

	d1 = (left / 10) + '0';
	u1 = (left % 10) + '0';
	d2 = (right / 10) + '0';
	u2 = (right % 10) + '0';
	if (left < right)
	{
		write(1, &d1, 1);
		write(1, &u1, 1);
		write(1, " ", 1);
		write(1, &d2, 1);
		write(1, &u2, 1);
		if (!( d1 == '9' && u1 == '8' && d2 == '9' && u2 == '9'))
		{
			write(1, ",", 1);
		}
	}

}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	right = 0;
	while (left < 99)
	{
		while (right <= 99)
		{
			display(left, right);
			right++;
		}
		left++;
		right = 0;
	}
}
