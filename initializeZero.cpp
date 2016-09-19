/******************************************************************
 * *Function:		initializeZero()
 * *
 * *Description:	CPP FILE
 * *Initializes contents ot 2D array to zero.
 * *
 * *Parameters:  Reference to pointer to 2D array, int and int
 * *
 * *Pre-Conditions:  2D array must exist
 * *
 * *Post-Conditions:  N/A
 * ***************************************************************/


#include "initializeZero.hpp"


void initializeZero(int **&array, int row, int col)
{
	int a = 0;	

	for(int i = 0; i < row ; i++)
	{
		for(int j = 0; j < col; j++)
		{
			array[i][j] = a;  /*Initialize to zero*/
		}
	}

}
