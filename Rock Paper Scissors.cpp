/*
* Omar Khan
* Rock Paper Scissors Game
* 10/4/21
* The purpose of this program is the computer and user make their choice.
* Depending on the choices a winner will be declared.
* After the user is asked if they want to continue.
* Depending on the answer the game will resume or end.
*/


#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
	unsigned
		gamePlayCount = 0,
		tieCount = 0,
		playerWinnerCount = 0,
		computerWinnerCount = 0;

	const unsigned short
		ROCK_WEAPON = 1,
		PAPER_WEAPON = 2,
		SCISSORS_WEAPON = 3,
		END_GAME_CHOICE = 4;
	//get player choice
	unsigned short
		computerWeaponChoice,
		playerWeaponChoice;

	do
	{
		cout << "Please choose a weapon from the menu below: " << endl << endl;
		cout << "1.> Rock" << endl;
		cout << "2.> Paper" << endl;
		cout << "3.> Scissors" << endl;
		cout << "4.> End Game" << endl << endl;
		cout << "Weapon Choice : "; cin >> playerWeaponChoice;
		cout << endl;

		if ((ROCK_WEAPON <= playerWeaponChoice) && (playerWeaponChoice <= SCISSORS_WEAPON)) {
			cout << "Player weapon is : ";
			switch (playerWeaponChoice) {
			case ROCK_WEAPON: cout << "Rock"; break;
			case PAPER_WEAPON: cout << "Paper"; break;
			case SCISSORS_WEAPON: cout << "Scissors"; break;
			}
		}
		else if (playerWeaponChoice == END_GAME_CHOICE) {
			break;

		}
		else {
			cout << endl << "Invalid menu choice, please try again" << endl << endl << endl;
			cout << "Press the enter key once or twice to continue…" << endl << endl;
			cin.ignore(); cin.get();
			continue;
		}

		gamePlayCount++;
		cout << endl << endl;

		srand(clock());
		computerWeaponChoice = (rand() % SCISSORS_WEAPON + 1);

		cout << "Computer weapon is : ";
		switch (computerWeaponChoice) {
		case ROCK_WEAPON: cout << "Rock"; break;
		case PAPER_WEAPON: cout << "Paper"; break;
		case SCISSORS_WEAPON: cout << "Scissors"; break;
		}
		cout << endl << endl << endl;

		if (computerWeaponChoice == playerWeaponChoice) {
			cout << "It's a tie" << endl;
			tieCount++;
		}
		else {
			switch (computerWeaponChoice) {
			case ROCK_WEAPON:
				switch (playerWeaponChoice) {
				case PAPER_WEAPON:
					cout << "Paper covers rock, player wins" << endl;
					playerWinnerCount++;
					break;
				case SCISSORS_WEAPON:
					cout << "Rock smashes scissors, computer wins" << endl;
					computerWinnerCount++;
					break;
				}
				break;
			case PAPER_WEAPON:
				switch (playerWeaponChoice) {
				case ROCK_WEAPON:
					cout << "Paper covers rock, computer wins" << endl;
					computerWinnerCount++;
					break;
				case SCISSORS_WEAPON:
					cout << "Scissors cuts paper, player wins" << endl;
					playerWinnerCount++;
					break;
				}
				break;
			case SCISSORS_WEAPON:
				switch (playerWeaponChoice) {
				case ROCK_WEAPON:
					cout << "Rock smashes scissors, player wins" << endl;
					playerWinnerCount++;
					break;
				case PAPER_WEAPON:
					cout << "Scissors cuts paper, computer wins" << endl;
					computerWinnerCount++;
					break;
				}
				break;
			}
		}
		cout << endl;
		cout << "Number of     : " << endl;
		cout << "Ties          : " << tieCount << endl;
		cout << "Player Win    : " << playerWinnerCount << endl;
		cout << "Computer Wins : " << computerWinnerCount << endl;
		cout << "Games Played  : " << gamePlayCount << endl << endl;

		cout << "Press the enter key once or twice to continue... " << endl << endl;
	} while (true);
	return EXIT_SUCCESS;

}



