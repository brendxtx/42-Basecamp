void	search_for_all_4(int observers[][4], int towers[][4]);
void	fill_with_4(int observer_type, int observer_position, int towers[][4]);
void	fill_with_1234(int observer_type, int observer_position, int towers[][4]);
void	fill_tower(int x, int y, int towers[][4], int value);

void	search_for_all_4(int observers[][4], int towers[][4])
{
	int	observer_position;
	int	observer_type;

	observer_type = 0;
	while (observer_type < 4)
	{
		observer_position = 0;
		while (observer_position < 4)
		{
			if (observers[observer_type][observer_position] == 1)
                fill_with_4(observer_type, observer_position, towers);
			if (observers[observer_type][observer_position] == 4)
                fill_with_1234(observer_type, observer_position, towers);
            observer_position++;
        }
        observer_type++;
    }
}

void	fill_with_4(int observer_type, int observer_position, int towers[][4])
{
	if(observer_type == 0)
		fill_tower(0, observer_position, towers, 4);
	if(observer_type == 1)
		fill_tower(observer_position, 0, towers, 4);
	if(observer_type == 2)
		fill_tower(observer_position, 3, towers, 4);
	if(observer_type == 3) 
		fill_tower(3, observer_position, towers, 4);
}

void	fill_with_1234(int observer_type, int observer_position, int towers[][4])
{
	int	increment;
	int	i;
	int	actual_tower_height;

	i = 0;
	actual_tower_height = 1;
	if (observer_type == 0 || observer_type == 1)
		increment = 1;
	else
	{
		increment = -1;
		actual_tower_height = 4;
    }

	while(i < 4)
	{
		if (observer_type == 0 || observer_type == 3)
			fill_tower(i, observer_position, towers, actual_tower_height);
		else
			fill_tower(observer_position, i, towers, actual_tower_height);
			actual_tower_height = actual_tower_height + increment;
		i++;
	}
}
