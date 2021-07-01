#include <iostream>
#include <vector>

#include "grade.h"
#include "student_info.h"

using std::istream;
using std::vector;

double Student_info::grade() const
{
	return ::grade(midterm, final, homework);
}

bool compare(const Student_info& x, const Student_info& y)
{
	return x.name() < y.name();
}

Student_info::Student_info(): midterm(0), final(0) { }

Student_info::Student_info(istream& is) { read(is); }

// read homework grades from an input stream into a 'vector<double>'
istream& read_hm(istream& in, vector<double>& hw)
{
	if (in) {
		// get rid of previous contents
		hw.clear();

		// read homework grades
		double x;
		while(in >> x)
			hw.push_back(x);

		in.clear();
	}
	return in;
}

istream& Student_info::read(istream& in)
{
	in >> n >> midterm >> final;
	read_hm(in, homework);
	return in;
}
