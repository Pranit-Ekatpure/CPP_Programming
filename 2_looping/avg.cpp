// Calculating students grade

#include <iostream>
#include <ios>
#include <iomanip>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::setprecision;
using std::string;
using std::streamsize;

int main()
{
	// read students name
	cout << "Please enter your name: ";
	string name;

	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	// enter midterm and final grades 
	cout << "Please enter your midterm and final exam grades: ";
	double midterm, final;
	cin >> midterm >> final;

	// enter the homework grades 
	cout << "Enter all your homework grades, "
		"followed by end-of-line: ";

	// the number and sum of grades read so far
	int count = 0;
	double sum = 0;

	// avariable into which to read
	double x;

	while(cin >> x)
	{
		++count;
		sum += x;
	}

	// write the result 
	streamsize prec = cout.precision();
	cout << "Your final grades is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * sum/count 
		<< setprecision(prec) << endl;

	return 0;
}
