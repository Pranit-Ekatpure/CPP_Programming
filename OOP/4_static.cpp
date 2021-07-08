// Example of static, used to refer common property of all objects.

#include <iostream>

using namespace std;

class Account {
	public:
		int accNum;
		string name;
		static float rateOfInterest;

		Account(int accNum, string name)
		{
			this->accNum = accNum;
			this->name = name;
		}

		void display()
		{
			cout << accNum << " " << name << " " << rateOfInterest << endl;
		}
};

float Account::rateOfInterest = 5.6;

int main()
{
	Account a1(1, "Pranit");
	Account a2(2, "Shiva");

	a1.display();
	a2.display();

	return 0;
}


