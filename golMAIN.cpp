/*******************************************************************
 * *Program Filename:		golMAIN.cpp
 * *
 * *Author:	Jeanvally G.Beato
 * *Date:	1/15/16
 * *
 * *Description:  Simulated Conway's Game of Life.  This program 
 * *creates a dynamically allocated 2D array.  It allows the user
 * *to specify what pattern/shape to insert as well as starting
 * *position.  It then incorporates the rules to check each cell
 * *and it's neighbors to create "generation" after "generation".
 * *It then asks the user how many "generations" they want to see
 * * and displays the progress of the "generations" to the user
 * *in a fixed loop.  
 * *
 * *Input:  Pattern/shape (int), x-coordinate (int), 
 * *y-coordinate (int)
 * *
 * *Output:  Progress of changing states of arrays
 * ****************************************************************/




#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include "displayGrid.hpp"
#include "initializeZero.hpp"
#include "userChoice.hpp"
#include "insert.hpp"

using namespace std;

int main()
{

	int row = 30;
	int col = 50;
	int **gridptr;	

	/*
 	**USER INPUT
	*/
	int userX;
	int userY;
	int pattern;
	int generations;	

	/*
 	**DYNAMICALLY ALLOCATE 2D ARRAY
	*/
	gridptr = new int*[row];			/*Allocate 30 pointer to ints*/
		for(int j = 0; j < row; j++)		/*Make each point to dyn. all. array*/
		{
			gridptr[j] = new int[col];
		}
	
	

	initializeZero(gridptr, row, col);		/*Initialize grid to zero*/
	

	
	userChoice(userX, userY, pattern);		/*Get user inputs*/
	


	insert(gridptr, pattern, userX, userY);		/*Insert chosen pattern*/

	
	
	/*
 	**ASK USER FOR GENERATIONS
	*/
	cout << "How many generations would you like to see? " <<endl;
	cin >> generations;
	


	/*
 	**DISPLAY GRID LOOP				
	*/
	for(int i = 0; i < generations; i ++)
	{
		displayGrid(gridptr);
	
		usleep(150000);
		system("clear");
	}	
	

	
	/*
 	**DELETE ALLOCATED MEMORY
	*/
	delete [] gridptr;


	
	return 0;
}
