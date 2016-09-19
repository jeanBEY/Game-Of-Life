 /*******************************************************************
 * *Function:		displayGrid() 
 * *
 * *Description:	CPP FILE
 * *Creates a temp array.  Accesses neighbors and fills temp array 
 * *with "next generation".  Copies temp array to original array.
 * *Displays 20(row) x 40(col) window. 
 * *
 * *Parameters:  Pointer to 2D array
 * *
 * *Pre-Conditions:  N/A
 * *
 * *Post-Conditions:  N/A
 * ****************************************************************/


#include "displayGrid.hpp"
 

void displayGrid(int **array)
{

	int temp[30][50];	
	
	/*
 	**ACCESS EACH NEIGHBOR CELL
	*/
	for(int j = 1; j < 29; j++)	
	{
		for(int i = 1; i < 49; i++)
		{			
			int count = 0;		
	
			count = array[j-1][i] +
				array[j-1][i-1] +
				array[j-1][i+1] +
			   	array[j] [i-1]  +
				array[j] [i+1]  +
				array[j+1][i]   +
				array[j+1][i-1] +
				array[j+1][i+1];
			
			if(count == 0 || count == 1)
			{
				temp[j][i] = 0;		/*DIES*/
			}			
			else if(count > 3)
			{
				temp[j][i] = 0;		/*DIES*/
			}
			else if(count == 3)
			{
				temp[j][i] = 1;		/*STAYS ALIVE OR "BIRTH"*/
			}
		}
	}
	
	

	/*
  	**ASSIGN NEW TEMP VALUES TO ORIGINAL ARRAY
	*/
	for(int k = 0; k < 30; k++)
	{
		for(int g = 0; g < 50; g++)
		{
			array[k][g] = temp[k][g];
		}		
	}				

	

	/*	
 	**DISPLAY ARRAY (only 40 x 20 window)
	**ONLY ROW:  5-26
	**ONLY COL:  5-46
	*/
	for(int m = 5; m < 26; m++)
	{
		for(int n = 5; n <46; n++)
		{	
			int cell;
			cell = array[m][n];		
	
			if(cell == 1)
			{
				cout << "#" ;
			}
			else if(cell == 0)
			{
				cout << " " ;
			}
		}
		
		cout <<endl;
	}
		

}
