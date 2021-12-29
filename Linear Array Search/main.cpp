/*
* Omar Khan
* 11/30/2021
* Linear Array Search
* This program will scan a file full of numbers and check if any of the number are present in the other file scanned. 
*/


#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool SearchList(int stdList[], unsigned numElems, int searchValue, unsigned& foundIndex);

const string LS_STANDARD_FILENAME = "LSStandard.txt";
const string LS_TEST_FILENAME = "LSTEST.txt";

const unsigned LS_STANDARD_ARRAY_SIZE = 100;
const unsigned LS_TEST_ARRAY_SIZE = 50;



int main()
{

	int LSStandardArray[LS_STANDARD_ARRAY_SIZE],
		LSTestArray[LS_TEST_ARRAY_SIZE];

	ifstream lsStandardFile(LS_STANDARD_FILENAME);

	if (lsStandardFile.fail())
	{
		cout << "File " << LS_STANDARD_FILENAME << " could not be opened !" << endl;
		cout << "Press enter key once or twice to continue ..." << endl;
		cin.ignore(); cin.get();
		exit(EXIT_FAILURE);
	}

	ifstream lsTestFile(LS_TEST_FILENAME);
	if (lsTestFile.fail())
	{
		cout << "File " << LS_TEST_FILENAME << " could not be opened !" << endl;
		cout << "Press enter key once or twice to continue ..." << endl;
		cin.ignore(); cin.get();
		exit(EXIT_FAILURE);
	}


	unsigned lsStardardElementNumber = 0;
	for (; lsStandardFile >> LSStandardArray[lsStardardElementNumber]; ++lsStardardElementNumber);

	unsigned lsTestElementNumber = 0;
	for (; lsTestFile >> LSTestArray[lsTestElementNumber]; ++lsTestElementNumber);

	lsStandardFile.close();
	lsTestFile.close();

	for (unsigned lsTestSearchIndex = 0, foundIndex; lsTestSearchIndex < lsTestElementNumber; ++lsTestSearchIndex)
	{
		cout << "Number " << setw(2) << lsTestSearchIndex + 1 << " (" << setw(3) << LSTestArray[lsTestSearchIndex] << ") ";
		if (SearchList(LSStandardArray, lsStardardElementNumber, LSTestArray[lsTestSearchIndex], foundIndex))
			cout << "was located at index " << foundIndex << "." << endl;
		else
			cout << "was not in the file." << endl;
	}

	return EXIT_SUCCESS;

}

bool SearchList(int stdList[], unsigned numElems, int searchValue, unsigned& foundIndex)
{
	for (foundIndex = 0; foundIndex < numElems; ++foundIndex)
		if (stdList[foundIndex] == searchValue)
			return true;
	return false;
}



