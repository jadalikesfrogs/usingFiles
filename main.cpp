// get exactly 5 ints from the user and write them to a file called data.txt

#include <iostream>
#include <fstream>
using namespace std;


int main() {

	ofstream myDataFile;

	myDataFile.open("data.txt");

	for (int i = 0; i < 5; i++) {
		int anInt = 0;
		cin >> anInt;
		myDataFile << anInt << endl;
	}

	myDataFile.close();
	return 0;
}