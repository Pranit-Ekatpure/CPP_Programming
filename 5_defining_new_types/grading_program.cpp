#include <algorithm>
#include <iomanip>

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include "student_info.h"
#include "median.h"

using std::cin;				using std::cout;
using std::domain_error;	using std::endl;
using std::setprecision;	using std::setw;
using std::sort;			using std::streamsize;
using std::string;			using std::vector;
using std::max;

int main()
{
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0;

	// read and store data
	while(record.read(cin))
	{
		maxlen = max(maxlen, record.name().size());
		students.push_back(record);
	}

	// sort by student name
	sort(students.begin(), students.end(), compare);

	// write the names and grades
	for (vector<Student_info>::size_type i = 0; i != students.size(); ++i)
	{
		cout << students[i].name() << string(maxlen + 1 - students[i].name().size(), ' ');
		try {
			double final_grade = students[i].grade();
			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade
				<< setprecision(prec) << endl;
		} catch (domain_error e) {
			cout << e.what() << endl;
		}
	}
	return 0;
}
