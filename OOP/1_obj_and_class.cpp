// Example of class, it creates the instance of class, initialize the object and prints the object

#include <iostream>

using namespace std;

class Student {
	public:
		int id;
		string name;
};

int main()
{
	Student s1;
	s1.id = 1;
	s1.name = "Pranit";

	cout << "Id: " << s1.id << ", Name: " << s1.name << endl;

	return 0;
}


