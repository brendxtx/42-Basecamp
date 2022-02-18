/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bteixeir <bteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:33:23 by bteixeir          #+#    #+#             */
/*   Updated: 2022/02/08 21:27:40 by bteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_int_char(int n1, int n2);
void	ft_swap_char(char a);

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_int_char(n1, n2);
			n2++;
		}
		n1++;
	}
}

void	ft_swap_char(char a)
{
	write(1, &a, 1);
}

void	ft_int_char(int n1, int n2)
{
	ft_swap_char(48 + (n1 / 10));
	ft_swap_char(48 + (n1 % 10));
	ft_swap_char(' ');
	ft_swap_char(48 + (n2 / 10));
	ft_swap_char(48 + (n2 % 10));
	if (!(n1 == 98 && n2 == 99))
		write(1, ", ", 2);
}
