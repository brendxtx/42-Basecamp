/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:06:43 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/14 03:03:04 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int treat_and_validate_observers(char *arg[], int observers[][4]);
int solver(int observers[][4], int towers[][4], int tower_count[4]);
void preset_count_towers(int tower_count[4]);
void print_result(int towers[][4]);

int main	(int numargs, char *arg[]);

int main	(int numargs, char *arg[]) 
{
	int observers[4][4];
	int towers[4][4];
	int tower_count[4];

	preset_count_towers(tower_count);
	if (numargs != 17)
		write(1, "Error\n", 6);
	else {
		if ((treat_and_validate_observers	(arg, observers)) == 1)
			write(1, "Error\n", 6);
		else 
		{
			if((solver (observers, towers, tower_count)) == 1)
				print_result (towers);
		}
	}
}

void	print_result(int towers[][4])
{
	int x;
	int y;
	int acsii_number;
	
	x = 0;
	while (x<4)
	{
		y = 0;
		while (y<4){
			acsii_number = towers[x][y] + 48;
			write (1, &acsii_number, 1);
			write (1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}

void preset_count_towers(int tower_count[4])
{
	int i;
	i = 0;
	while (i<4){
			tower_count[i] = 0;
			i++;
		}
}