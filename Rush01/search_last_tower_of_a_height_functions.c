#include <unistd.h>

void count_all_towers(int tower_count[4], int towers[][4]);
int search_for_last_tower_of_a_height(int height, int tower_count[4], int towers[][4]);
int scan_all_lines_to_find_missing_tower_by_direction(int height_to_search,int towers[][4], char direction);
void preset_count_towers(int tower_count[4]);
void fill_tower(int x, int y, int towers[][4], int value);

int search_for_last_tower_of_a_height(int height, int tower_count[4], int towers[][4])
{
    int x;
    int y;

    count_all_towers(tower_count, towers);
    if(tower_count[height - 1] == 3){
        x = scan_all_lines_to_find_missing_tower_by_direction(height, towers, 'h');//horizontal
        y = scan_all_lines_to_find_missing_tower_by_direction(height, towers, 'v');//vertical
        fill_tower(x, y, towers, height);
        return 1;
    }
    else{
        return 0;
    }
}

void count_all_towers(int tower_count[4], int towers[][4])
{
    preset_count_towers(tower_count);
    int x;
	int y;
	
	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4){
            if(towers[x][y] == 1)
                tower_count[0]++;
            if(towers[x][y] == 2)
                tower_count[1]++;
            if(towers[x][y] == 3)
                tower_count[2]++;
            if(towers[x][y] == 4)
                tower_count[3]++;
			y++;
		}
		x++;
	}
}

int scan_all_lines_to_find_missing_tower_by_direction(int height_to_search,int towers[][4], char direction)
{
    int x;
    int y;
    int count;

    x = 0;
    while (x < 4)
	{
		y = 0;
        count = 1;
		while (y < 4){
            if(direction == 'v')
            {
                if(towers[x][y] == height_to_search)
                    break;
            }
            else
            {
                if(towers[y][x] == height_to_search)
                    break;
            }
			y++;
            count++;
            if(count > 4) // se rodei 4x sem dar break, é q não tem esse número nessa linha
                return x;
		}
		x++;
	}
    return 5;
}
