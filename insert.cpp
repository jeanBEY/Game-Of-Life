/********************************************************************
 * *Function:		insert()
 * *
 * *Description:	CPP FILE
 * *Using user specified coordinates and pattern/shape choice, this 
 * *function inserts the pattern/shape in 2D array.
 * *
 * *Parameter:  Reference to pointer to 2D array, int, int, and int
 * *
 * *Pre-Conditions:  2D array, int (x-coord), int (y-coord), 
 * *int(pattern/shape) choice must exist
 * *
 * *Post-Conditions:  N/A
 * ******************************************************************/



#include "insert.hpp"


void insert(int **&array, int pattern, int row, int col)
{
	if(pattern == 1)	/*OSCILLATOR*/
	{
		array[row + 4][col + 4] = 1;
		array[row + 4][col + 5] = 1;
		array[row + 5][col + 4] = 1;
		array[row + 5][col + 5] = 1;
		
		array[row + 6][col + 7] = 1;
		array[row + 6][col + 6] = 1;
		array[row + 7][col + 7] = 1;
		array[row + 7][col + 6] = 1;
	}
	else if(pattern == 2)	/*GLIDER*/
	{
		array[row + 4][col + 4] = 1;
		array[row + 4][col + 5] = 1;
		array[row + 4][col + 6] = 1;
		array[row + 3][col + 6] = 1;
		array[row + 2][col + 5] = 1;
	}
	else if(pattern == 3)	/*GLIDER CANNON*/
	{
		array[row + 4][col + 4] = 1;
		array[row + 5][col + 4] = 1;
		array[row + 9][col + 4] = 1;
		array[row + 10][col + 4] = 1;

		array[row + 6][col + 14] = 1;
		array[row + 6][col + 15] = 1;
		array[row + 7][col + 14] = 1;
		array[row + 7][col + 15] = 1;

		array[row + 5][col + 2] = 1;	
		array[row + 9][col + 2] = 1;
		
		array[row + 6][col + 1] = 1;
		array[row + 7][col + 1] = 1;
		array[row + 8][col + 1] = 1;
		array[row + 6][col + 0] = 1;
		array[row + 7][col + 0] = 1;
		array[row + 8][col + 0] = 1;

		array[row + 8][col - 19] = 1;
		array[row + 9][col - 19] = 1;
		array[row + 8][col - 20] = 1;
		array[row + 9][col - 20] = 1;

		array[row + 8][col - 10] = 1;
		array[row + 5][col - 10] = 1;
		array[row + 10][col - 10] = 1;

		array[row + 7][col - 9] = 1;
		array[row + 11][col - 9] = 1;

		array[row + 6][col - 8] = 1;
		array[row + 12][col - 8] = 1;

		array[row + 6][col -7] = 1;
		array[row + 12][col - 7] = 1;

		array[row + 9][col - 6] = 1;

		array[row + 7][col -5] = 1;
		array[row + 11][col - 5] = 1;

		array[row + 8][col - 4] = 1;
		array[row + 9][col - 4] = 1;
		array[row + 10][col - 4] = 1;
		
		array[row + 9][col - 3] = 1;			
	
	}
}
