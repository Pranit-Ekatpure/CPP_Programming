// Example of class, initialize and display data through method. 

#include <iostream>

using namespace std;

class Student {
	public:
		int id;
		string name;

		void insert(int id, string name)
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
	Student s1;
	Student s2;
	s1.insert(100, "Pranit");
	s2.insert(101, "Shiva");

	s1.display();
	s2.display();

	return 0;
}


