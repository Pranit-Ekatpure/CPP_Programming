#include <iostream>

using namespace std;

template <typename T>
int compareTo( T a, T b)
{
	if(a < b)
		return -1;
	else if(a > b)
		return 1;
	else 
		return 0;
}

int main()
{
	int x = 10, y = 100, i;
	i = compareTo(x, y);
	cout << "int: " << i << endl;
	double d1 = 10.7, d2 = 9.2;
	i = compareTo(d1, d2);
	cout << "double: " << i << endl;
	string s1 = "John";
	string s2 = "Alice";
	i = compareTo(s1, s2);
	cout << "string: " << i << endl;

	return 0;
}

