 /*
 * Omar Khan
 * 11/1/2021
 * Function Prime
 * This program will generate a file which will contain a list of prime numbers
 * based on the user's input for max range which the program will increment to
 */



#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool isPrime(unsigned number);



int main() {

	unsigned entriesPerLine = 0;
	int input;
	const int INPUT_MAX_RANGE = 100;
	const unsigned ENTRIES_PER_LINE_MAX = 10;
	const string OUTPUT_FILENAME = "PrimeOut.txt";

	ofstream outputFileStream(OUTPUT_FILENAME);
	if (outputFileStream.fail())
	{
		cout << "File" << OUTPUT_FILENAME << " could not be opened !" << endl;
		cout << "Press enter key once or twice to exit ... "; cin.ignore(); cin.get();
		exit(EXIT_FAILURE);
	}

	do
	{
		cout << endl << "Enter the maximum range value (1 ... 100): "; cin >> input;
		if (input < 1 || input > INPUT_MAX_RANGE)
			cout << endl
		<< "Entry error, please enter a number between 1 and 100 inclusive" << endl;
		else
			break;
	} while (true);

	cout << endl;
	outputFileStream << "The primes that are <= " << input << " are:" << endl << endl;
	for (unsigned number = 2; number <= input; number++)
	{
		if (isPrime(number))
		{
			entriesPerLine++;
			cout << setw(5) << number;
			outputFileStream << setw(5) << number;
			if (entriesPerLine == ENTRIES_PER_LINE_MAX)
			{
				cout << endl;
				outputFileStream << endl;
				entriesPerLine = 0;
			}
		}
	}

	cout << endl;

	outputFileStream.close();

	return EXIT_SUCCESS;

}

bool isPrime(unsigned number)
{
	for (unsigned i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}
