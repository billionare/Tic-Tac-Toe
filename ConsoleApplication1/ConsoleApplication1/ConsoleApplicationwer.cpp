#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>

using namespace std;

int printBoard(int placement_x, int placement_y);

/*int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow)*/

int main()
{
	// Changes the colour of the console
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// SetConsoleTextAttribute();

	string player1 = "";     // Player ones name
	string player2 = "";     // Player twos name

	int nextPlayer  = 0;     // Which player is going first / next

	int placement_x = 0;     // Placement on the board on the X axis
	int placement_y = 0;     // Placement on the board on the Y axis

	char player1Piece = ' '; // Player ones game piece
	char player2Piece = ' '; // Player twos game piece
	char trash = ' ';        // Stores the
	char position = ' ';     //

	bool win = false;        // tests if the game been won


	// Prompt users to enter their names
	cout << "Player 1, please enter your name: ";
	cin >> player1;
	cout << endl;

	cout << "Player 2. please enter your name: ";
	cin >> player2;
	cout << endl << endl;

	Sleep(300);
	system("cls");

	// Get the users game piece
	cout << "Team " << player1 << ", you have the choice of game piece." << endl;
	cout << "Team " << player1 << ", please enter your game piece : " << endl;
	cin >> player1Piece;
	cout << endl << endl;

	// Get the second users game piece
	cout << "Team " << player2 << ", you also have the choice of game piece." << endl;
	cout << "Team " << player2 << ", please enter your game piece : " << endl;
	cin >> player2Piece;
	cout << endl << endl;

	Sleep(300);
	system("cls");

	// Tell users what their game pieces are
	cout << "Team " << player1 << " gamepiece is " << player1Piece << endl;
	cout << "Team " << player2 << " gamepiece is " << player2Piece << endl;

	Sleep(300);
	system("cls");

	// Ask who is going first
	cout << "Who is going first?" << endl;

	cout << "Enter 1 for " << player1 << ", or enter 2 for " << player2 << endl;
	cin >> nextPlayer;
	cout << endl << endl;

	while (firstPlayer != 1 && firstPlayer != 2)
	{
		// Setting console to red
		SetConsoleTextAttribute(hConsole, 4); 

		cout << "ERROR: invalid team. Please try again" << endl;

		SetConsoleTextAttribute(hConsole, 8) // Not sure if we need this yet

		Sleep(300);
		system("cls");

		cout << "Who is going first?" << endl;
		cout << "Enter 1 for " << player1 << ", or enter 2 for " << player2 << endl;
		cin >> nextPlayer;
		cout << endl << endl;
	}

	/*if (firstPlayer == 1)
	{
		cout << player1 << ": " << "Where would you like to go?";
		cin >> placement_x >> trash >> placement_y;

		nextPlayer = 2; // Setting the next player to 2

		// Calling the printBoard function to print the inputted coordiates
		printBoard(placement_x, placement_y); 
	} */

	while (win == false)
	{
		if (nextPlayer == 1)
		{

		}
		else
		{
			cout << "Where would you like to go " << player2 << "? : ";
			cin  >> placement_x >> 
		}	
		
	}

	//____________________________________________________________________________________


	return 0;

}
int printBoard(int placement_x, int placement_y)
{


	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	if (placement_x == 1 && placement_y == 1)
	{
		//position = player1Piece;
		cout << "     1   2   3" << endl << endl;
		cout << setw(7) << setfill(' ') << left << " 1" << setw(4) << left << '|' << /*nextPlayer*/ right << '|' << endl;
		cout << setw(15) << setfill('-')<< left << "    " << endl; // NOT NEEDED FOR SCORING
		cout << setw(7) << setfill(' ') << left << " 2" << setw(4) << left << '|' << right << '|' << endl;
		cout << setw(15) << setfill('-')<< left << "    " << endl; // NOT NEEDED FOR SCORING
		cout << setw(7) << setfill(' ') << left << " 3" << setw(4) << left << '|' << right << '|' << endl << endl << endl;

	}
	else if (placement_x == 1 && placement_y == 2)
	{
		
	}
	else if (placement_x == 1 && placement_y == 2)
	{
		
	}
	else if (placement_x == 1 && placement_y == 3)
	{
		
	}
	else if (placement_x == 2 && placement_y == 1)
	{
		
	}
	else if (placement_x == 2 && placement_y == 2)
	{
		
	}
	else if (placement_x == 2 && placement_y == 3)
	{
		
	}
	else if (placement_x == 3 && placement_y == 1)
	{
		
	}
	else if (placement_x == 3 && placement_y == 2)
	{
		
	}
	else if (placement_x == 3 && placement_y == 3)
	{
	
	}
	else {
		SetConsoleTextAttribute(hConsole, 4);
		cout << "ERROR: Invlaid coordinate";
	}

	
	cout << "     1   2   3" << endl << endl;
	cout << setw(8) << setfill(' ') << left << " 1"  << "| " << "  |" << endl;
	cout << setw(17)<< setfill('-') << left << "    "<< endl; // NOT NEEDED FOR SCORING
	cout << setw(8) << setfill(' ') << left << " 2"  << "| " << "  |" << endl;
	cout << setw(17)<< setfill('-') << left << "    "<< endl; // NOT NEEDED FOR SCORING
	cout << setw(8) << setfill(' ') << left << " 3"  << "| " << "  |" << endl << endl << endl;

	return 0;
}



//cout << "     1   2   3" << endl << endl;
//cout << setw(7) << setfill(' ')  << left << " 1"   << setw(4) << left << '|' << right << '|' << endl;
//cout << setw(15)<< setfill('-')  << left << "    " << endl; // NOT NEEDED FOR SCORING
//cout << setw(7) << setfill(' ')  << left << " 2"   << setw(4) << left << '|' << right << '|' << endl;
//cout << setw(15)<< setfill('-')  << left << "    " << endl; // NOT NEEDED FOR SCORING
//cout << setw(7) << setfill(' ')  << left << " 3"   << setw(4) << left << '|' << right << '|' << endl << endl << endl;
