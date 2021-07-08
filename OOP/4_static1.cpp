// Example of static, used to count objects.

#include <iostream>

using namespace std;

class Account {
	public:
		static int count;

		Account()
		{
			count++;
		}
};

int Account::count = 0;

int main()
{
	Account a1;
	Account a2;

	cout << "Total objects are: " << Account::count << endl;

	return 0;
}


