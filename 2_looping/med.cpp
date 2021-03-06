// Calculating students grade

#include <iostream>
#include <ios>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

using std::setprecision;
using std::string;
using std::streamsize;

using std::sort;
using std::vector;

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

	vector<double> homework;
	double x;

	// homework contains all the homework grades 
	while(cin >> x)
		homework.push_back(x);

	// check that the student entered some homework grades
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if(size == 0)
	{
		cout << endl << "You must enter your grades. "
			"Please try again." << endl;
		return 1;
	}

	// sort the grades
	sort(homework.begin(), homework.end());

	// compute the median homework grade
	vec_sz mid = size/2;
	double median;
	median = size % 2 == 0?(homework[mid] + homework[mid-1])/2
		:homework[mid];
	// write the result 
	streamsize prec = cout.precision();
	cout << "Your final grades is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median 
		<< setprecision(prec) << endl;

	return 0;
}
