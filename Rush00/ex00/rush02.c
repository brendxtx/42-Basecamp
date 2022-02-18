/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:24:50 by lbathke-          #+#    #+#             */
/*   Updated: 2022/02/05 18:31:52 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

void	first_row(int col)
{
	int	current_col;

	current_col = 1;
	ft_putchar('A');
	while (current_col < col - 1)
	{
		ft_putchar('B');
		current_col++;
	}
	if (col > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	mid_row(int col)
{
	int	current_col;

	current_col = 1;
	ft_putchar('B');
	while (current_col < col - 1)
	{
		ft_putchar(' ');
		current_col++;
	}
	if (col > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	last_row(int col)
{
	int	current_col;

	current_col = 1;
	ft_putchar('C');
	while (current_col < col - 1)
	{
		ft_putchar('B');
		current_col++;
	}
	if (col > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	current_row;

	if (x < 1 || y < 1)
	{
		return ;
	}
	first_row(x);
	current_row = 2;
	while (current_row <= y)
	{
		if (current_row == y)
		{
			last_row(x);
		}
		if (current_row != y)
		{
			mid_row(x);
		}
		current_row++;
	}
}
