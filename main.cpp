// get exactly 5 ints from the user and write them to a file called data.txt and print the average on screen

#include <iostream>
#include <fstream>
using namespace std;


int main() {

	ofstream myDataFile;			// delcare an obj for the output file
	ifstream mySourceFile;			// declare obj for the input file
	double avFromFile = 0.0;		// somewhere to store our average

	myDataFile.open("data.txt");

	for (int i = 0; i < 5; i++) {
		int anInt = 0;
		cin >> anInt;
		myDataFile << anInt << endl;
	}

	myDataFile.close();

	//the average
	mySourceFile.open("data.txt");

	for (int i = 0; i < 5; i++) {
		int anInt = 0;
		mySourceFile >> anInt;
		myDataFile << anInt << endl;
		avFromFile += static_cast<double>(anInt);
	}

	mySourceFile.close();

	avFromFile /= 5.0;
	cout << "The average from the file is " << avFromFile << endl;
	return 0;
}