/**********************************************************************
 * 	Description: File read write example
 *
 *********************************************************************/
#include <fstream>
#include <iostream>

using namespace std;

int main() {
	char data[400];

	/* Open a file in a write mode */
	ofstream outfile;
	outfile.open("afile.dat");

	cout<<"Writing to the file"<<endl;
	cout<<"Enter your name: ";
	cin.getline(data,100);

	/* Write inputted data into the file */
	outfile<<data<<endl;

	cout<<"Enter your age: ";
	cin>>data;
	cin.ignore();

	/* Again write inputted data into the file */
	outfile<<data<<endl;

	/* Close the opened fiel */
	outfile.close();

	/* Open a file in read mode */
	ifstream infile;
	infile.open("afile.dat");

	cout<<"Reading data from file"<<endl;
	infile>>data;

	/* Write the data at the screen */
	cout<<data<<endl;

	/* Again read data from file and display */
	infile>>data;
	cout<<data<<endl;

	/* Close the opened file */
	infile.close();

	return 0;
}
