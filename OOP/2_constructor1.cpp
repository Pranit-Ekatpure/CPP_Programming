// Example of parameterized constructor.

#include <iostream>

using namespace std;

class Student {
	public:
		int id;
		string name;

		Student(int id, string name)
		{
			this->id = id;
			this->name = name;
		}

		void display()
		{
			cout << id << " " << name << endl;
		}
};

int main()
{
	Student s1(10, "Pranit");
	Student s2 = Student(11, "Shiva");

	s1.display();
	s2.display();

	return 0;
}


