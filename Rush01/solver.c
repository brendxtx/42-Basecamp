#include <unistd.h>

int	solver(int observers[][4], int towers[][4], int tower_count[4]);
void search_for_all_4(int observers[][4], int towers[][4]);
void fill_tower(int x, int y, int towers[][4], int value);
int search_for_last_tower_of_a_height(int height, int tower_count[4], int towers[][4]);
void solver_repeat(int towers[][4], int tower_count[4], int observers[][4]);

int	solver(int observers[][4], int towers[][4], int tower_count[4])
{
	search_for_all_4(observers, towers);
	solver_repeat(towers, tower_count, observers);

	return 1;
}

void fill_tower(int x, int y, int towers[][4], int value)
{
    towers[x][y] = value;
}

void solver_repeat(int towers[][4], int tower_count[4], int observers[][4])
{
	int i;
	int towers_founded_in_this_round;

	towers_founded_in_this_round = 0;
	i = 1;
	while(i <= 4){
		towers_founded_in_this_round = towers_founded_in_this_round + search_for_last_tower_of_a_height(i, tower_count, towers);
		i++;
	}
	if(towers_founded_in_this_round > 0 )
		solver_repeat(towers, tower_count, observers);
}