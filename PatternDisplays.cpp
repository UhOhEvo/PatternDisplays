// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB3_1
Project Name:
File Name: .cpp
Description: (provide a short synopsis of what is accomplished in this particular file)
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{

	// Local variable declarations placed here
	int row, col;

	// Inform user what program does
	cout << "This program will print an increasing pattern "
		<< "and a decreasing pattern.\n" << endl;

	// A software algorithm would typically be executed after all data has been input
	for (row = 0; row < 10; row++) // set row to 0 and have it increment until it reaches 10
	{
		for (col = 0; col <= row; col++) // set col to 0 and have it increment until it is <= row
		{
			cout << "+";
		}

		cout << endl;

	}

	cout << endl;

	for (row = 10; row > 0; row--) // set row to 10 and have it decrement until it reaches 0
	{
		for (col = row; col > 0; col--) // set col equal to row to print 10 stars the decrement the stars with col until it reaches 0
		{
			cout << "+";
		}

		cout << endl;

	}

	cout << endl;

	// Program output done at end of program


	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);

}


// PROOF
// Program output copied into the below comment section
/*
This program will print an increasing pattern and a decreasing pattern.

+
++
+++
++++
+++++
++++++
+++++++
++++++++
+++++++++
++++++++++

++++++++++
+++++++++
++++++++
+++++++
++++++
+++++
++++
+++
++
+

Press any key to continue . . .
*/