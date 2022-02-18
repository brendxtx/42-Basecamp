/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bteixeir <bteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 03:51:36 by bteixeir          #+#    #+#             */
/*   Updated: 2022/02/07 20:49:19 by bteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_combine(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{	
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 +1;
			while (num3 <= '9')
			{
				ft_combine(num1, num2, num3);
				++num3;
			}
			++num2;
		}
		++num1;
	}	
}
