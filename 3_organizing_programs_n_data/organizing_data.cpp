/* i/p : xyz 9 8 7 6 5 
         abc 4 5 6 7 8 9
   o/p : abc 5.8
         xyz 7.4
*/
#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <stdexcept>
#include <algorithm>
#include <iomanip>

using std::string;
using std::vector;
using std::istream;
using std::domain_error;
using std::sort;
using std::cin;
using std::cout;
using std::max;
using std::streamsize;
using std::endl;
using std::setprecision;

struct Student_info {
    string name;
    double midterm, final;
    vector <double> homework;
};

istream& read_hw(istream& is, vector <double>& hw)
{
    if(is)
    {
        hw.clear();
        //read homework grade
        double x;
        while (is >> x)
            hw.push_back(x);

        is.clear();
    }
    return is;
}

istream& read(istream& is, Student_info& s) 
{
    //read and store the studet's name and midterm and final exam grades
    is >> s.name >> s.midterm >> s.final;

    //read and store all the student's homework grades
    read_hw(is, s.homework);
    return is;
}

//compute median of vector<double>
double median(vector<double> vec)
{
    typedef vector<double>::size_type vec_size;
    vec_size size = vec.size();
    if(size == 0)
        throw domain_error("median of an empty vector");
    
    sort(vec.begin(), vec.end());
    vec_size mid = size/2;

    return size % 2 == 0 ? (vec[mid] + vec[mid - 1])/2 : vec[mid];
}

double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& hw)
{
    if(hw.size()== 0)
        throw domain_error("student has done no homework");
    return grade(midterm, final, median(hw));
}

double grade(const Student_info& s)
{
    return grade(s.midterm, s.final, s.homework);
}

bool compare(const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}

int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0; //the length of the longest name

    //read and store all the students data
    while(read(cin, record))
    {
        //find the length of longest name
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    //alphabetize the student records
    sort(students.begin(), students.end(), compare);

    //write the names and grades
    for(vector<Student_info>::size_type i = 0; i != students.size(); i++)
    {
        //write the name, padding on the right to maxlen + 1 characters
        cout << students[i].name << string(maxlen + 1 -students[i].name.size(), ' ');

        //compute and write the grade
        try
        {
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec);
        }
        catch(domain_error e)
        {
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
}