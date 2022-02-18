/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bteixeir <bteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:57:51 by bteixeir          #+#    #+#             */
/*   Updated: 2022/02/17 01:50:27 by bteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = size - 1;
	while (i >= size / 2)
	{
		aux = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size -1) - i] = aux;
		i--;
	}	
}
