#include <unistd.h>

int treat_and_validate_observers	(char *arg[], int observers[][4]);
void positioning_observers(char actualObserver, int observers[][4], int observerNumber);

int treat_and_validate_observers	(char *arg[], int observers[][4])
{
	int i;
	int count4;
	int count1;

	count4 = 0;
	count1 = 0;
	i = 1;
	while (i < 17){
		if (((*arg[i] - '0') < 1 ) || ((*arg[i] - '0') > 5))
			return 1;
		if ((*arg[i] - '0') == 4 )
		{
			count4++;
		}
		if ((*arg[i] - '0') == 1 )
			count1++;
		positioning_observers(*arg[i], observers, i);
		i++;
	}
	if (count1 != 4)
		return 1;
	if (count4 > 4)
		return 1;
	return 0;
}

void positioning_observers(char actualObserver, int observers[][4], int observerNumber)
{
		/*Transformando array em matriz 4x4, sendo que linha0 = up, linha1 = down, 
	linha 2 = left, linha3 = rigth: 
	observers[0][0] >>> colup1, observers[0][1] >>> colup2, observers[0][2] >>> colup3, observers[0][3] >>> colup4, 
	observers[1][1] >>> rowleft1, observers[1][1] >>> rowleft2, observers[1][2] >>> rowleft3, observers[1][3] >>> rowleft4,
	observers[2][0] >>> rowright1, observers[2][1] >>> rowright2, observers[2][2] >>> rowright3, observers[2][3] >>> rowright4
	observers[3][0] >>> coldown1, observers[3][1] >>> coldown2, observers[3][2] >>> coldown3, observers[3][3] >>> coldown4,
	*/

	int k;
	k = (observerNumber % 4) -1;
	if(k == -1)
		k = 3;
	if(observerNumber >=1 && observerNumber <=4)
		observers[0][k] = actualObserver - '0';
	if(observerNumber >=5 && observerNumber <=8)
		observers[3][k] = actualObserver - '0';
	if(observerNumber >=9 && observerNumber <=12)
		observers[1][k] = actualObserver - '0';
	if(observerNumber >=13 && observerNumber <=16)
		observers[2][k] = actualObserver - '0';
}