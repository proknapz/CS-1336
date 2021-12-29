/*
* Arithmetics String
* 9/9/2021
* Omar Khan
* Purpose
* This Program takes input given by users to do Arithmetic Manipulation
*
*
*/
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>   
using namespace std;

int main()
{
	//Number Bases
	int ibase;
	cout << "Please enter an integer to convert: "; cin >> ibase;
	cout << endl;
	cout << "Use iomanips to condition the stream" << endl;

	cout << "The entered integer in octal        form is: " << oct << ibase << endl;
	cout << "The entered integer in hexadecimal  form is: " << hex << ibase << endl;
	cout << "The entered integer in decimal      form is: " << dec << ibase << endl;
	cout << endl;

	cout << "Use iomanips setbase to format what follows in the stream" << endl;
	cout << "The entered integer in octal        form is: " << setbase(8) << ibase << endl;
	cout << "The entered integer in hexadecimal  form is: " << setbase(16) << ibase << endl;
	cout << "The entered integer in decimal      form is: " << setbase(10) << ibase << endl;
	cout << endl << endl;

	int ishift01, ishift02;
	cout << "Please enter an integer to shift to multiply by 4 : "; cin >> ishift01;
	ishift02 = ishift01;
	cout << "This integer multiplied by 4 with left  shift binary operator is: " << (ishift01 << 2) << endl;
	cout << "This integer divided    by 4 with right shift binary operator is: " << (ishift02 >> 2) << endl;
	cout << endl << endl;

	//Portability
	//char, short, int, unsigned int, long, long long, bool, float, double
	cout << "All sizes are in Bytes : " << endl;
	cout << "char size:       " << sizeof(char) << endl;
	cout << "short size:      " << sizeof(short) << endl;
	cout << "int size:        " << sizeof(int) << endl;
	cout << "unsigned size:   " << sizeof(unsigned) << endl;
	cout << "long size:       " << sizeof(long) << endl;
	cout << "long long size:  " << sizeof(long long) << endl;
	cout << "bool size:       " << sizeof(bool) << endl;
	cout << "float size:      " << sizeof(float) << endl;
	cout << "double size:     " << sizeof(double) << endl;
	cout << endl << endl;

	int ic;
	cout << "Please enter a number for a char : "; cin >> ic;

	char c = ic;
	cout << "Character for int c is : " << c << endl;
	cout << endl << endl;

	unsigned int uInt;
	cout << "Please enter a negative number : "; cin >> uInt;
	cout << "The unsigned int is :  " << uInt;
	cout << endl << endl;

	//portability
	int i = 1;
	i = i / i++;
	cout << "int i = 1; i = i / i++;" << endl << "i is " << i << endl;
	cout << endl << endl;

	i = 0;
	i = i * ++i;
	cout << "i = 0; i = i * ++i;" << endl << "The value for i is " << i << endl;
	cout << endl << endl;

	i = 0;
	i = (i = i + 1) + (i = i + 2);
	cout << "i = 0; i = (i = i + 1) + (i = i + 2);" << endl << "The value for i is : " << i << endl;
	cout << endl << endl;

	bool a = true, b = false;
	a = (b = false) && (b++);
	cout << "bool a = true, b = false; a = (b = false) && (b++); :" << endl;
	cout << "a is " << a << endl;
	cout << "b is " << b << endl;
	cout << endl << endl;

	//Calculations
	int first, second;
	cout << "Please enter a 1st integer : "; cin >> first;
	cout << "Please enter a 2nd integer : "; cin >> second;
	cout << endl;

	cout << "The entered 1st integer is : " << first << endl;
	cout << "The entered 2nd integer is : " << second << endl;
	cout << endl;

	cout << "The sum of the two integers is :       " << first + second << endl;
	cout << "The product of the two integers is :   " << first * second << endl;
	cout << "The whole number quotient 1st/2nd is : " << first / second << endl;
	cout << "The remainder of 1st/2nd is :          " << first % second << endl;
	cout << "The float result of 1st/2nd is :       " << ((float)first / second) << endl;
	cout << "The 1st to the power of the 2nd is :   " << pow(first, second) << endl;
	cout << endl << endl;

	float float01, float02;
	cout << "Please enter a 1st real number : "; cin >> float01;
	cout << "Please enter a 2nd real number : "; cin >> float02;
	cout << endl;

	cout << "The entered 1st real number is : " << float01 << endl;
	cout << "The entered 2nd real number is : " << float02 << endl;
	cout << endl;

	cout << "The sum of the two real numbers is :     " << float01 + float02 << endl;
	cout << "The product of the two real numbers is : " << float01 * float02 << endl;
	cout << "The quotient of 1st/2nd is :             " << float01 / float02 << endl;
	cout << "The whole number part of 1st number is : " << (int)float01 << endl;
	cout << "The whole number part of 2st number is : " << (int)float02 << endl;
	cout << "The fractional   part of 1st number is : " << float01 - (int)float01 << endl;
	cout << "The fractional   part of 2st number is : " << float02 - (int)float02 << endl;
	cout << endl << endl;


	int anInteger;
	cout << "Please enter an Integer to convert to a float : "; cin >> anInteger;
	cout << "The integer as a float is  " << showpoint << (float)anInteger << endl;
	cout << endl;

	float aFloat;
	cout << "Please enter a   float  to convert to an integer : "; cin >> aFloat;
	cout << "The float as an integer is  " << int(aFloat) << endl;
	cout << endl << endl;

	//Strings
	string string01;
	cout << "Please enter 1st string : "; cin >> string01;
	cout << endl;

	cout << "The 1st string is :                  " << string01 << endl;
	cout << "The length of this string is :       " << string01.length() << endl;
	cout << "The first letter of this string is : " << string01.at(0) << endl;
	cout << "The last  letter of this string is : " << string01.at(string01.length() - 1) << endl;
	cout << endl;

	string string02;
	cout << "Please enter 2st string : "; cin >> string02;
	cout << endl;

	cout << "The 1st string concatenated with the 2nd string :                            " << string01 + string02 << endl;
	cout << "The 1st string concatenated with the 2nd string with a space in between is : " << string01 + " " + string02 << endl;
	cout << endl << endl;

	cout << "Press the enter key once or twice to end..." << endl; cin.ignore(); cin.get();

	return EXIT_SUCCESS;
}
