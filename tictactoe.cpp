// Developed by Ethan Clary

#include <iostream>
#include <string>
//I chose vectors since it's fresh in everyone's heads and very easy to understand.
#include <vector>

using namespace std;

// These variables are used to determine which character the player and computer are using.
// These are also used to check values at certain variables, just to make sure the computer doesn't
// confuse itself.

// Leaving the variables dynamic also allows us to tweak the program. So the user can choose if they want to
// be X's or O's. I personally always choose X's.
string cpuChar = "?";
string userChar = "?";

// Now this is declaring a Vector with 9 variables. There are 9 slots on a tic-tac-toe game.
vector<string> ticTacSlots(9);

// This integer checks if a game is going.
// If this equals 1, the game is going and the computer can still make moves.
// If this is 0, the game ends.
int gameGoing;

// Forward declaration of userturn Function
// In CPUTurn we'll need to switch to the other function of userturn.
// C++ Can't declare a function that's below it, so by putting this here,
// we can modify the function later and have the code work.
int userturn();


// Funciton Load Board
// Every turn the board needs to update with who's at what position.
// This is more for the user, because the computer internally already knows who's at what spot.

// Since this is called before any turn selection happens, we can also use this to check to see if
// anyone has won the game yet.
int loadBoard() {
	cout << "\n\n\n " << ticTacSlots.at(0) << " | " << ticTacSlots.at(1) << " | " << ticTacSlots.at(2) << endl;
	cout << "---+---+---" << endl;
	cout << " " << ticTacSlots.at(3) << " | " << ticTacSlots.at(4) << " | " << ticTacSlots.at(5) << endl;
	cout << "---+---+---" << endl;
	cout << " " << ticTacSlots.at(6) << " | " << ticTacSlots.at(7) << " | " << ticTacSlots.at(8) << endl;
}

// Check Game Function
// Checks to see if anyone has won the game yet.
int checkGame() {

	loadBoard();

	if (ticTacSlots.at(0) == ticTacSlots.at(1) && ticTacSlots.at(1) == ticTacSlots.at(2)) {
		cout << "The top row wins!" << endl;
		gameGoing = 0;
		return 0;
	}
	else if (ticTacSlots.at(3) == ticTacSlots.at(4) && ticTacSlots.at(4) == ticTacSlots.at(5)) {
		cout << "The middle row wins!" << endl;
		gameGoing = 0;
		return 0;
	}
	else if (ticTacSlots.at(6) == ticTacSlots.at(7) && ticTacSlots.at(7) == ticTacSlots.at(8)) {
		cout << "The bottom row wins!" << endl;
		gameGoing = 0;
		return 0;
	}
	else if (ticTacSlots.at(0) == ticTacSlots.at(3) && ticTacSlots.at(3) == ticTacSlots.at(6)) {
		cout << "The left column wins!" << endl;
		gameGoing = 0;
		return 0;
	}
	else if (ticTacSlots.at(1) == ticTacSlots.at(4) && ticTacSlots.at(4) == ticTacSlots.at(7)) {
		cout << "The middle column wins!" << endl;
		gameGoing = 0;
		return 0;
	}
	else if (ticTacSlots.at(2) == ticTacSlots.at(5) && ticTacSlots.at(5) == ticTacSlots.at(8)) {
		cout << "The right column wins!" << endl;
		gameGoing = 0;
		return 0;
	}
	else if (ticTacSlots.at(0) == ticTacSlots.at(4) && ticTacSlots.at(4) == ticTacSlots.at(8)) {
		cout << "The right upward diagonal wins!" << endl;
		gameGoing = 0;
		return 0;
	}
	else if (ticTacSlots.at(2) == ticTacSlots.at(4) && ticTacSlots.at(4) == ticTacSlots.at(6)) {
		cout << "The left downward diagonal wins!" << endl;
		gameGoing = 0;
		return 0;
	}
	else if (ticTacSlots.at(0) != "1" && ticTacSlots.at(1) != "2" && ticTacSlots.at(2) != "3" && ticTacSlots.at(3) != "4" && ticTacSlots.at(4) != "5" && ticTacSlots.at(5) != "6" && ticTacSlots.at(6) != "7" && ticTacSlots.at(7) != "8" && ticTacSlots.at(8) != "9") {
		cout << "The game is a draw!" << endl;
		gameGoing = 0;
		return 0;
	}
}

// CPU Turn Function
// This function doesn't emplore any machine learning AI. That would be really complicated and I'm really lazy.
// So what this does it generates a random number, 1-9, checks to see if it is taken by any player or by the computer.
// If it is taken, it will then generate another number and check that spot until it finds a spot it can take
// on the board. Then after that, it will pass the control back over to the user.
int cputurn() {

	checkGame();

	if (gameGoing==1) {
				// This is the CPU's Selection. It will choose a number 0-8 in the while loop and test that index.
				int cpusel;

				// This integer acts as a stop for the while loop. Once a number is decided on, it flicks to one,
				// stopping the loop.
				int decided = 0;

				while (decided == 0) {

					// rand() generates a random integer. The % 9 makes it in the range of 0 to 8, which is corrospondant
					// with the indexes we have available to us.
					cpusel = rand() % 9;

					// First we test for the CPU's character (X or O) and if it's there, iterate through the loop again.
					// It can't place it's character there.
					if (ticTacSlots.at(cpusel) == cpuChar) {
						// This is just so I can see it iterate through the loop successfully. Ideally you'd remove this so
						// the program runs faster.
						cout << ".";
					}
					// Next we test for the player's character.
					// To make sure the computer doesn't take your spot.
					else if (ticTacSlots.at(cpusel) == userChar){
						cout << ".";
					}
					else {
						// And if it isn't the user's or the cpu's character, then the computer takes the spot, ending the loop.
						ticTacSlots.at(cpusel) = cpuChar;
						decided = 1;
						cout << "Chose spot " << (cpusel + 1) << "!" << endl;
						userturn();
					}
				}
			}
			else {
				return 0;
			}
}

// Player Turn Function
// This function tells the player to pick an available square.
int userturn() {

	checkGame();

	if (gameGoing==1) {
		cout << "\nPick an available square." << endl;

		int selection;

		cin >> selection;
		if(selection > 0 && selection < 9)
		{
		int indexSelection = selection-1;

				if(ticTacSlots.at(indexSelection) != cpuChar && ticTacSlots.at(indexSelection) != userChar)
				{
					ticTacSlots.at(indexSelection) = userChar;
					cputurn();
				}
				else {
					cout << "Try again." << endl;
					userturn();
				}
		}
		else{
		cout << "invalid choice, Please choose a space between 1-9!\n" << endl;
		userturn();
		}
	}
	else {
		return 0;
	}
}


int main()
{
	int choice;
	unsigned int i;

	for (i = 0; i < ticTacSlots.size(); ++i) {
		ticTacSlots.at(i) = to_string(i + 1);
	}

	cout << "Welcome to CS1A Tic-Tac-Toe!" << endl;
	cout << "Please enter 1 for X, and 2 for O.\n" << endl;

	cout << "1. X (moves first)" << endl;
	cout << "2. O (moves second)" << endl;


	cin >> choice;

	if (choice == 1) {
		gameGoing = 1;
		cout << "You've chosen X's!" << endl;
		userChar = "X";
		cpuChar = "O";
		userturn();
	}
	else if (choice == 2) {
		gameGoing = 1;
		cout << "You've chosen O's!" << endl;
		userChar = "O";
		cpuChar = "X";
		cputurn();
	}

	return 0;
}
