/*******************************************************************
 * *Function:		userChoice()
 * *
 * *Description:	CPP FILE
 * *Allows user to choose pattern/shape to insert into grid.  Also
 * *allows user to choose starting position of pattern/shape,
 * *by letting them pick x & y coordinates.
 * *
 * *Parameters:  Reference to int, reference to int, and reference
 * *to int
 * *
 * *Pre-Conditions:  Ints being passed as reference must exist 
 * *
 * *Post-Conditions:  Only ints as input will be accepted
 * ****************************************************************/



#include "userChoice.hpp"


void userChoice(int &x, int &y, int &pattern)
{
	int choice;

		
	cout << "Which pattern would you like to enter? " <<endl;
	cout << "Enter 1 for oscillator, 2 for glider, and 3 for glider cannon: " <<endl;


	cin >> choice;


	/*Input validation*/
	if(choice != 1 || choice != 2 || choice != 3)
	{
		cout << "Please enter valid input." <<endl;
		cout << "Which pattern would you like to enter? " <<endl;
		cout << "Enter 1 for oscillator, 2 for glider, and 3 for glider cannon: " <<endl;

		cin >> choice;
	}


	
	if(choice == 1)			/*OSCILLATOR*/
	{
		cout << "You have chosen to insert the oscillator." <<endl;
		cout << "The cell you specify is the top left-hand most cell of the pattern." <<endl;

		cout << "Please choose an x-coordinate between 1-17: " <<endl;
		cin >> x;
		
		/*Input validation*/
		if(x > 0 && x < 18)
		{	
			cout << "Please choose a y-coordinate between 1-37: " <<endl;
			cin >> y;
		}
		else
		{
			cout << "Please enter valid input.  Choose an x-coordinate between 1-17: " << endl;
			cin >> x;
			cout << "Please choose a y-coordinate between 1-37: " <<endl;
			cin >> y;				
			
			if(y < 1 && y > 37)
			{
				cout << "Please enter valid input.  Choose a y-coordinate between 1-37: " <<endl;
				cin >> y;
			}
			
		}
		
	
		pattern = choice;

	}
	else if(choice == 2)		/*GLIDER*/
	{
		cout << "You have chosen to insert the glider." <<endl;
		cout << "The cell you specify is the bottom left-hand most cell of the pattern" <<endl; 

		cout << "Please choose an x-coordinate between 3-20: " <<endl;
		cin >> x;

		/*Input validation*/
		if(x > 2 && x < 21)		
		{
			cout << "Please choose a y-coordinate between 1-38: " <<endl;
			cin >> y;
		}
		else
		{
			cout << "Please enter valid input.  Choose an x-coordinate between 3-20: " <<endl;
			cin >> x;
			cout << "Please choose a y-coordinate between 1-38: " <<endl;
			cin >> y;

			if(y < 1 && y > 38)
			{
				cout << "Please enter valid input.  Choose a y-coordinate between 1-38: " <<endl;
				cin >> y;
			}
		}

		
		pattern = choice;
	}
	else if(choice == 3)		/*GLIDER GUN*/
	{
		cout << "You have chosen to insert the glider." <<endl;
		cout << "The cell you specify is the top most cell of the pattern" <<endl; 
		
		cout << "Please choose an x-coordinate between 1-11: " <<endl;
		cin >> x;

		/*Input validation*/
		if(x > 0 && x < 12)
		{
			cout << "Please choose a y-coordinate between 25-28: " <<endl;
			cin >> y;
		}
		else 
		{
			cout << "Please enter valid input.  Choose an x-coordinate between 1-11: " <<endl;
			cin >> x;
			cout << "Please choose a y-coordinate between 25-28: " <<endl;
			cin >> y;

			if(y < 25 && y > 28)
			{
				cout << "Please enter valid input.  Choose a y-coordinate between 25-28: " <<endl;
				cin >> y;
			}
		}	

			
		pattern = choice;
	}
	

}
